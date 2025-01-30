#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDateTime>
#include <QMessageBox>
#include <QTimer>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow){
    ui->setupUi(this);
    tcpConnect();

    connect(ui->pushButtonConnect,
            SIGNAL(clicked(bool)),
            this,
            SLOT(tcpConnect()));

    connect(ui->pushButtonDisconnect,
            SIGNAL(clicked(bool)),
            this,
            SLOT(tcpDisconnect()));

    connect(ui->pushButtonStart,
            SIGNAL(clicked(bool)),
            this,
            SLOT(start()));

    connect(ui->pushButtonStop,
            SIGNAL(clicked(bool)),
            this,
            SLOT(stop()));

    connect(ui->pushButtonUpdate,
            SIGNAL(clicked(bool)),
            this,
            SLOT(updateList()));

    connect(ui->listWidget,
            SIGNAL(itemSelectionChanged()),
            this,
            SLOT(updateData()));

    ip_ = getHost();
    ui->horizontalSliderTiming->setValue(3);
}

void MainWindow::tcpConnect(){
    socket = new QTcpSocket(this);
    socket->connectToHost(getHost(),1234);
    if(socket->waitForConnected(3000)) {
        qDebug() << "Connected";
        all_ip.push_back(getHost());
        ui->labelConnection->setText("<p style='color:green;' >Connected</p>");
    }
    else {
        qDebug() << "Disconnected";
        ui->labelConnection->setText("<p style='color:red;' >Disconnected</p>");
    }
}

void MainWindow::tcpDisconnect(){
    if(socket->state() == QAbstractSocket::ConnectedState){
        socket->disconnectFromHost();
        qDebug() << "Disconnected\r\n";
        ui->labelConnection->setText("<p style='color:red;' >Disconnected</p>");
    }
    if(timeOn){
        killTimer(timer);
    }
    auto selectedItems = ui->listWidget->selectedItems();

    for(auto it = all_ip.begin(); it != all_ip.end();){
        bool eraseItem = false;
        for(auto &item : selectedItems){
            if(*it == item->text()){
                eraseItem = true;
                qDebug() << "erase = true";
                break;
            }
        }
        if(eraseItem){
            // Remove o item correspondente da lista
            for(int i = 0; i < ui->listWidget->count(); ++i){
                if(ui->listWidget->item(i)->text() == *it){
                    ui->listWidget->takeItem(i);
                    break;
                }
            }
            it = all_ip.erase(it); // Apaga o item da lista de IPs e atualiza o iterador
            qDebug() << "apagou";
        }else{
            ++it; // Avança o iterador
        }
    }
}

void MainWindow::getData(){
    QString str;
    QByteArray array;
    QStringList list;
    qint64 thetime;
    QList<int> data;

    if(data.length()>30){
        data.erase(data.begin(),data.end());
    }
    qDebug() << "to get data...";
    str = ui->listWidget->selectedItems()[0]->text();
    array = str.toLocal8Bit();
    if(socket->state() == QAbstractSocket::ConnectedState){
        if(socket->isOpen()){
            qDebug() << "reading...";
            socket->write("get " + array + " 10\r\n");
            socket->waitForBytesWritten();
            socket->waitForReadyRead();
            qDebug() << socket->bytesAvailable();
            while(socket->bytesAvailable()){
                str = socket->readLine().replace("\n","").replace("\r","");
                list = str.split(" ");
                if(list.size() == 2){
                    bool ok;
                    str = list.at(0);
                    thetime = str.toLongLong(&ok);
                    str = list.at(1);
                    data.append(str.toInt(&ok));
                    qDebug() << thetime << ": " << str; // tempo e número
                }
            }
        }
        ui->widget->updatePoints(data);
    }
}

void MainWindow::updateData(){
    if(!ui->listWidget->selectedItems().isEmpty()){
        ui->horizontalSliderTiming->setVisible(true);
    }else{
        ui->horizontalSliderTiming->setVisible(false);
        if(!timeOn) {
            killTimer(timer);
        }
    }
}

void MainWindow::start(){
    if (!socket || socket->state() != QAbstractSocket::ConnectedState) {
        QMessageBox::warning(this, "Connection Error", "You must be connected to the server before starting.");
        return;
    }
    timer = ui->horizontalSliderTiming->value();
    timer = startTimer((timer)*1000);
    timeOn = true;
    qDebug() << "Starting timer...";
}

void MainWindow::stop(){
    killTimer(timer);
    timeOn = false;
    qDebug() << "Stoping timer...";
}

void MainWindow::timerEvent(QTimerEvent *event){
    getData();
    repaint();
}

void MainWindow::updateList(){
    if(!socket || socket->state() != QAbstractSocket::ConnectedState){
            QMessageBox::warning(this, "Connection Error", "You are not connected to the server.");
            return;
        }
    if(socket->state() == QAbstractSocket::ConnectedState){
        if (socket->isOpen()){
            qDebug() << "Requesting IP list from server...";
            socket->write("list\r\n"); // Comando para o servidor enviar a lista de IPs
            socket->waitForBytesWritten();
            if (socket->waitForReadyRead(3000)){ // Aguarda a resposta do servidor
                QString response = socket->readAll();
                QStringList ipList = response.split("\n", Qt::SkipEmptyParts);
                all_ip.clear();
                for (const QString& ip : ipList){
                    all_ip.push_back(ip.trimmed());
                }

                // Atualizar o QListWidget com os IPs
                ui->listWidget->clear();
                for (const QString& ip : all_ip){
                    ui->listWidget->addItem(ip);
                }

                qDebug() << "IP list updated from server.";
            }else{
                qDebug() << "Failed to get IP list from server.";
                QMessageBox::warning(this, "Error", "Could not retrieve IP list from server.");
            }
        }
    }else{
        QMessageBox::warning(this, "Disconnected", "Socket is not connected to server.");
    }
}

QString MainWindow::getHost(){
    return ui->lineEditIP->text();
}

MainWindow::~MainWindow(){
    delete ui;
}
