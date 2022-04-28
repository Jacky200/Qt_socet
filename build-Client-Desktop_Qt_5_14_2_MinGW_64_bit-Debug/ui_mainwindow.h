/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QWidget *widget_3;
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *Port;
    QPushButton *Start_Btn;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *IP;
    QPushButton *Disconnect_Btn;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_3;
    QTextEdit *Recording_Text;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout_4;
    QTextEdit *Send_Text;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer;
    QPushButton *Send_Btn;
    QSpacerItem *horizontalSpacer_2;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(400, 800);
        MainWindow->setMinimumSize(QSize(400, 800));
        MainWindow->setMaximumSize(QSize(400, 800));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        widget_3 = new QWidget(centralwidget);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        verticalLayout = new QVBoxLayout(widget_3);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        widget = new QWidget(widget_3);
        widget->setObjectName(QString::fromUtf8("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        Port = new QLineEdit(widget);
        Port->setObjectName(QString::fromUtf8("Port"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(167);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Port->sizePolicy().hasHeightForWidth());
        Port->setSizePolicy(sizePolicy);
        Port->setMinimumSize(QSize(167, 22));
        Port->setMaximumSize(QSize(167, 22));

        horizontalLayout->addWidget(Port);

        Start_Btn = new QPushButton(widget);
        Start_Btn->setObjectName(QString::fromUtf8("Start_Btn"));

        horizontalLayout->addWidget(Start_Btn);


        verticalLayout->addWidget(widget);

        widget_2 = new QWidget(widget_3);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(widget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        IP = new QLineEdit(widget_2);
        IP->setObjectName(QString::fromUtf8("IP"));
        IP->setMinimumSize(QSize(167, 22));
        IP->setMaximumSize(QSize(167, 22));

        horizontalLayout_2->addWidget(IP);

        Disconnect_Btn = new QPushButton(widget_2);
        Disconnect_Btn->setObjectName(QString::fromUtf8("Disconnect_Btn"));

        horizontalLayout_2->addWidget(Disconnect_Btn);


        verticalLayout->addWidget(widget_2);


        verticalLayout_2->addWidget(widget_3);

        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        horizontalLayout_3 = new QHBoxLayout(groupBox);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        Recording_Text = new QTextEdit(groupBox);
        Recording_Text->setObjectName(QString::fromUtf8("Recording_Text"));

        horizontalLayout_3->addWidget(Recording_Text);


        verticalLayout_2->addWidget(groupBox);

        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        horizontalLayout_4 = new QHBoxLayout(groupBox_2);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        Send_Text = new QTextEdit(groupBox_2);
        Send_Text->setObjectName(QString::fromUtf8("Send_Text"));

        horizontalLayout_4->addWidget(Send_Text);


        verticalLayout_2->addWidget(groupBox_2);

        widget_4 = new QWidget(centralwidget);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        horizontalLayout_5 = new QHBoxLayout(widget_4);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalSpacer = new QSpacerItem(127, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);

        Send_Btn = new QPushButton(widget_4);
        Send_Btn->setObjectName(QString::fromUtf8("Send_Btn"));

        horizontalLayout_5->addWidget(Send_Btn);

        horizontalSpacer_2 = new QSpacerItem(126, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);


        verticalLayout_2->addWidget(widget_4);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\347\253\257\345\217\243", nullptr));
        Port->setText(QCoreApplication::translate("MainWindow", "8999", nullptr));
        Start_Btn->setText(QCoreApplication::translate("MainWindow", "\345\274\200\345\247\213\350\277\236\346\216\245", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "IP:", nullptr));
        IP->setText(QCoreApplication::translate("MainWindow", "127.0.0.1", nullptr));
        Disconnect_Btn->setText(QCoreApplication::translate("MainWindow", "\346\226\255\345\274\200\350\277\236\346\216\245", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "\351\200\232\344\277\241\350\256\260\345\275\225", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "\345\217\221\351\200\201\346\225\260\346\215\256", nullptr));
        Send_Btn->setText(QCoreApplication::translate("MainWindow", "\345\217\221\351\200\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
