/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "plotter.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout_8;
    QHBoxLayout *horizontalLayout_7;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_6;
    QLabel *labelIP;
    QSpacerItem *horizontalSpacer_2;
    QLabel *labelConnection;
    QLineEdit *lineEditIP;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *pushButtonConnect;
    QPushButton *pushButtonDisconnect;
    QListView *listView;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButtonUpdate;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_3;
    QSlider *horizontalSliderTiming;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButtonStart;
    QPushButton *pushButtonStop;
    Plotter *widget;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(682, 554);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName("centralWidget");
        horizontalLayout_8 = new QHBoxLayout(centralWidget);
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        labelIP = new QLabel(centralWidget);
        labelIP->setObjectName("labelIP");

        horizontalLayout_6->addWidget(labelIP);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_2);

        labelConnection = new QLabel(centralWidget);
        labelConnection->setObjectName("labelConnection");

        horizontalLayout_6->addWidget(labelConnection);


        verticalLayout->addLayout(horizontalLayout_6);

        lineEditIP = new QLineEdit(centralWidget);
        lineEditIP->setObjectName("lineEditIP");

        verticalLayout->addWidget(lineEditIP);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        pushButtonConnect = new QPushButton(centralWidget);
        pushButtonConnect->setObjectName("pushButtonConnect");

        horizontalLayout_5->addWidget(pushButtonConnect);

        pushButtonDisconnect = new QPushButton(centralWidget);
        pushButtonDisconnect->setObjectName("pushButtonDisconnect");

        horizontalLayout_5->addWidget(pushButtonDisconnect);


        verticalLayout->addLayout(horizontalLayout_5);

        listView = new QListView(centralWidget);
        listView->setObjectName("listView");

        verticalLayout->addWidget(listView);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        pushButtonUpdate = new QPushButton(centralWidget);
        pushButtonUpdate->setObjectName("pushButtonUpdate");

        horizontalLayout->addWidget(pushButtonUpdate);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label = new QLabel(centralWidget);
        label->setObjectName("label");

        horizontalLayout_2->addWidget(label);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalSliderTiming = new QSlider(centralWidget);
        horizontalSliderTiming->setObjectName("horizontalSliderTiming");
        horizontalSliderTiming->setMinimum(1);
        horizontalSliderTiming->setMaximum(5);
        horizontalSliderTiming->setOrientation(Qt::Orientation::Horizontal);

        horizontalLayout_3->addWidget(horizontalSliderTiming);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName("label_2");

        horizontalLayout_3->addWidget(label_2);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        pushButtonStart = new QPushButton(centralWidget);
        pushButtonStart->setObjectName("pushButtonStart");

        horizontalLayout_4->addWidget(pushButtonStart);

        pushButtonStop = new QPushButton(centralWidget);
        pushButtonStop->setObjectName("pushButtonStop");

        horizontalLayout_4->addWidget(pushButtonStop);


        verticalLayout->addLayout(horizontalLayout_4);


        horizontalLayout_7->addLayout(verticalLayout);

        widget = new Plotter(centralWidget);
        widget->setObjectName("widget");

        horizontalLayout_7->addWidget(widget);

        horizontalLayout_7->setStretch(0, 40);
        horizontalLayout_7->setStretch(1, 60);

        horizontalLayout_8->addLayout(horizontalLayout_7);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 682, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName("mainToolBar");
        MainWindow->addToolBar(Qt::ToolBarArea::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName("statusBar");
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);
        QObject::connect(horizontalSliderTiming, &QSlider::valueChanged, label_2, qOverload<int>(&QLabel::setNum));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        labelIP->setText(QCoreApplication::translate("MainWindow", "IP do servidor", nullptr));
        labelConnection->setText(QCoreApplication::translate("MainWindow", "Disconnected", nullptr));
        lineEditIP->setText(QCoreApplication::translate("MainWindow", "127.0.0.1", nullptr));
        pushButtonConnect->setText(QCoreApplication::translate("MainWindow", "Connect", nullptr));
        pushButtonDisconnect->setText(QCoreApplication::translate("MainWindow", "Disconnect", nullptr));
        pushButtonUpdate->setText(QCoreApplication::translate("MainWindow", "Update", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Timing", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        pushButtonStart->setText(QCoreApplication::translate("MainWindow", "Start", nullptr));
        pushButtonStop->setText(QCoreApplication::translate("MainWindow", "Stop", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
