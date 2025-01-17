#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDateTime>
#include <QTimer>
#include <QDateTime>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent), ui(new Ui::MainWindow){
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
            SLOT(putData()));

    connect(ui->pushButtonStop,
            SIGNAL(clicked(bool)),
            this,
            SLOT(stop()));
}

void MainWindow::tcpConnect(){
    socket->connectToHost(getHost(),1234);
    if(socket->waitForConnected(3000)){
        qDebug() << "Connected";
        ui->labelConection->setText("<p style='color:green;' >Connected</p>");
    }
    else{
        qDebug() << "Disconnected";
        ui->labelConection->setText("<p style='color:red;' >Disconnected</p>");
    }
}

void MainWindow::tcpDisconnect(){
    socket->disconnectFromHost();
    ui->labelConection->setText("<p style='color:red;' >Disconnected</p>");
}

void MainWindow::putData(){
    timer = ui->horizontalSliderTiming->value();
    timer = startTimer((timer*1000));
    ui->textBrowser->append("<p style='color:green;' >Started</p>");
}

void MainWindow::stop(){
    killTimer(timer);
    ui->textBrowser->append("<p style='color:red;' >Stopped</p>");
}

void MainWindow::timerEvent(QTimerEvent *event){
    QDateTime datetime;
    QString str;
    qint64 msecdate;
    int min = ui->horizontalSliderMin->value();
    int max = ui->horizontalSliderMax->value();

    if(socket->state()== QAbstractSocket::ConnectedState){
        msecdate = QDateTime::currentDateTime().toMSecsSinceEpoch();
        str = "set " + QString::number(msecdate) + " " + QString::number(rand()%(max-min))+"\r\n";
        ui->textBrowser->append(str);
        qDebug() << str;
        qDebug() << socket->write(str.toStdString().c_str()) << " bytes written";
        if(socket->waitForBytesWritten(3000)){
            qDebug() << "wrote";
        }
    }
}

QString MainWindow::getHost(){
    QString ip = ui->lineEditIP->text();
    return ip;
}

MainWindow::~MainWindow(){
    delete socket;
    delete ui;
}
