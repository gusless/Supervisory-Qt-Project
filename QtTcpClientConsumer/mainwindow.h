#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTcpSocket>
#include <QDebug>
#include <QListWidget>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
  
public slots:
    void tcpConnect();
    void tcpDisconnect();
    void getData();
    void start();
    void stop();
    void updateList();
    void timerEvent(QTimerEvent *event);
    void updateData();
    QString getHost();

private:
    int timer;
    int timeOn = false;
    QString ip_;
    Ui::MainWindow *ui;
    QTcpSocket *socket;
    std::vector<QString> all_ip;
};

#endif // MAINWINDOW_H
