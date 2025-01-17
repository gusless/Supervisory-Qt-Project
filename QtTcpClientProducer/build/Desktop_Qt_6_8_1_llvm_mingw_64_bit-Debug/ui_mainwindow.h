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
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_7;
    QVBoxLayout *verticalLayout_3;
    QLineEdit *lineEditIP;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButtonConnect;
    QPushButton *pushButtonDisconnect;
    QHBoxLayout *horizontalLayout_3;
    QSlider *horizontalSliderMin;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLCDNumber *lcdNumberMin;
    QHBoxLayout *horizontalLayout_5;
    QSlider *horizontalSliderMax;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QLCDNumber *lcdNumberMax;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_3;
    QSlider *horizontalSliderTiming;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButtonStop;
    QPushButton *pushButtonStart;
    QTextBrowser *textBrowser;
    QHBoxLayout *horizontalLayout_4;
    QLabel *labelConection;
    QSpacerItem *horizontalSpacer;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(671, 538);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName("centralWidget");
        verticalLayout_4 = new QVBoxLayout(centralWidget);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName("verticalLayout_4");
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName("verticalLayout_3");
        lineEditIP = new QLineEdit(centralWidget);
        lineEditIP->setObjectName("lineEditIP");

        verticalLayout_3->addWidget(lineEditIP);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName("horizontalLayout");
        pushButtonConnect = new QPushButton(centralWidget);
        pushButtonConnect->setObjectName("pushButtonConnect");

        horizontalLayout->addWidget(pushButtonConnect);

        pushButtonDisconnect = new QPushButton(centralWidget);
        pushButtonDisconnect->setObjectName("pushButtonDisconnect");

        horizontalLayout->addWidget(pushButtonDisconnect);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalSliderMin = new QSlider(centralWidget);
        horizontalSliderMin->setObjectName("horizontalSliderMin");
        horizontalSliderMin->setMaximum(49);
        horizontalSliderMin->setValue(0);
        horizontalSliderMin->setOrientation(Qt::Orientation::Horizontal);

        horizontalLayout_3->addWidget(horizontalSliderMin);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(centralWidget);
        label->setObjectName("label");
        QFont font;
        font.setPointSize(12);
        label->setFont(font);
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(label);

        lcdNumberMin = new QLCDNumber(centralWidget);
        lcdNumberMin->setObjectName("lcdNumberMin");
        lcdNumberMin->setSegmentStyle(QLCDNumber::SegmentStyle::Flat);

        verticalLayout->addWidget(lcdNumberMin);


        horizontalLayout_3->addLayout(verticalLayout);


        verticalLayout_3->addLayout(horizontalLayout_3);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalSliderMax = new QSlider(centralWidget);
        horizontalSliderMax->setObjectName("horizontalSliderMax");
        horizontalSliderMax->setMinimum(50);
        horizontalSliderMax->setMaximum(100);
        horizontalSliderMax->setSliderPosition(50);
        horizontalSliderMax->setOrientation(Qt::Orientation::Horizontal);

        horizontalLayout_5->addWidget(horizontalSliderMax);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName("label_2");
        label_2->setFont(font);
        label_2->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        label_2->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_2->addWidget(label_2);

        lcdNumberMax = new QLCDNumber(centralWidget);
        lcdNumberMax->setObjectName("lcdNumberMax");
        lcdNumberMax->setSegmentStyle(QLCDNumber::SegmentStyle::Flat);

        verticalLayout_2->addWidget(lcdNumberMax);


        horizontalLayout_5->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName("label_3");

        horizontalLayout_6->addWidget(label_3);

        horizontalSliderTiming = new QSlider(centralWidget);
        horizontalSliderTiming->setObjectName("horizontalSliderTiming");
        horizontalSliderTiming->setMinimum(1);
        horizontalSliderTiming->setMaximum(5);
        horizontalSliderTiming->setOrientation(Qt::Orientation::Horizontal);

        horizontalLayout_6->addWidget(horizontalSliderTiming);

        label_4 = new QLabel(centralWidget);
        label_4->setObjectName("label_4");

        horizontalLayout_6->addWidget(label_4);


        verticalLayout_3->addLayout(horizontalLayout_6);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        pushButtonStop = new QPushButton(centralWidget);
        pushButtonStop->setObjectName("pushButtonStop");

        horizontalLayout_2->addWidget(pushButtonStop);

        pushButtonStart = new QPushButton(centralWidget);
        pushButtonStart->setObjectName("pushButtonStart");

        horizontalLayout_2->addWidget(pushButtonStart);


        verticalLayout_3->addLayout(horizontalLayout_2);


        horizontalLayout_7->addLayout(verticalLayout_3);

        textBrowser = new QTextBrowser(centralWidget);
        textBrowser->setObjectName("textBrowser");

        horizontalLayout_7->addWidget(textBrowser);

        horizontalLayout_7->setStretch(0, 50);
        horizontalLayout_7->setStretch(1, 50);

        verticalLayout_4->addLayout(horizontalLayout_7);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        labelConection = new QLabel(centralWidget);
        labelConection->setObjectName("labelConection");

        horizontalLayout_4->addWidget(labelConection);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);


        verticalLayout_4->addLayout(horizontalLayout_4);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 671, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName("mainToolBar");
        MainWindow->addToolBar(Qt::ToolBarArea::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName("statusBar");
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);
        QObject::connect(horizontalSliderMin, &QSlider::valueChanged, lcdNumberMin, qOverload<int>(&QLCDNumber::display));
        QObject::connect(horizontalSliderMax, &QSlider::valueChanged, lcdNumberMax, qOverload<int>(&QLCDNumber::display));
        QObject::connect(horizontalSliderTiming, &QSlider::valueChanged, label_4, qOverload<int>(&QLabel::setNum));
        QObject::connect(pushButtonConnect, SIGNAL(clicked()), MainWindow, SLOT(tpcConnect()));
        QObject::connect(pushButtonDisconnect, SIGNAL(clicked()), MainWindow, SLOT(tcpDisconnect()));
        QObject::connect(pushButtonStart, SIGNAL(clicked()), MainWindow, SLOT(iniciar()));
        QObject::connect(pushButtonStop, SIGNAL(clicked()), MainWindow, SLOT(finalizar()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        lineEditIP->setText(QCoreApplication::translate("MainWindow", "127.0.0.1", nullptr));
        pushButtonConnect->setText(QCoreApplication::translate("MainWindow", "Connect", nullptr));
        pushButtonDisconnect->setText(QCoreApplication::translate("MainWindow", "Disconnect", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Min", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Max", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Timing (s)", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        pushButtonStop->setText(QCoreApplication::translate("MainWindow", "Stop", nullptr));
        pushButtonStart->setText(QCoreApplication::translate("MainWindow", "Start", nullptr));
        labelConection->setText(QCoreApplication::translate("MainWindow", "Disconnect", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
