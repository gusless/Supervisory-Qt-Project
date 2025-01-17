#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDateTime>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow){
    ui->setupUi(this);
    socket = new QTcpSocket(this);
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
            SLOT(getData()));

    connect(ui->pushButtonStop,
            SIGNAL(clicked(bool)),
            this,
            SLOT(stop()));
}

void MainWindow::tcpConnect(){
    socket->connectToHost(getHost(),1234);
    if(socket->waitForConnected(3000)){
        qDebug() << "Connected";
        ui->labelConnection->setText("<p style='color:green;' >Connected</p>");
    }
    else{
        qDebug() << "Disconnected";
        ui->labelConnection->setText("<p style='color:red;' >Disconnected</p>");
    }
}

void MainWindow::tcpDisconnect(){
    socket->disconnectFromHost();
    ui->labelConnection->setText("<p style='color:red;' >Disconnected</p>");
}

void MainWindow::getData(){
    QString str;
    QByteArray array;
    QStringList list;
    qint64 thetime;
    qDebug() << "to get data...";
    if(socket->state() == QAbstractSocket::ConnectedState){
        if(socket->isOpen()){
            qDebug() << "reading...";
            socket->write("get 127.0.0.1 5\r\n");
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
                    qDebug() << thetime << ": " << str;
                }
            }
        }
    }
}

void MainWindow::stop(){

}

void MainWindow::update(){

}

QString MainWindow::getHost(){
    QString ip = ui->lineEditIP->text();
    return ip;
}

MainWindow::~MainWindow(){
    delete socket;
    delete ui;
}


