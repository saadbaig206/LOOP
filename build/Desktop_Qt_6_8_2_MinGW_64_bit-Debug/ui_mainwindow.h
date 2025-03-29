/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QPushButton *loginbutton;
    QPushButton *signinbutton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(600, 600);
        MainWindow->setMinimumSize(QSize(600, 600));
        MainWindow->setMaximumSize(QSize(600, 600));
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(15, 13, 35) ;"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(180, 120, 200, 200));
        label->setMinimumSize(QSize(200, 200));
        label->setMaximumSize(QSize(200, 200));
        label->setPixmap(QPixmap(QString::fromUtf8(":/image/logo1.jpg")));
        label->setScaledContents(true);
        loginbutton = new QPushButton(centralwidget);
        loginbutton->setObjectName("loginbutton");
        loginbutton->setGeometry(QRect(340, 450, 171, 61));
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        loginbutton->setFont(font);
        loginbutton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgb(86, 75, 205); \n"
"    color: white; \n"
"    border: 2px solid blue;\n"
"    border-radius: 5px;\n"
"    padding: 5px 10px; \n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: rgba(255, 255, 255, 0.2); \n"
"}"));
        signinbutton = new QPushButton(centralwidget);
        signinbutton->setObjectName("signinbutton");
        signinbutton->setGeometry(QRect(60, 450, 171, 61));
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(true);
        signinbutton->setFont(font1);
        signinbutton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgb(86, 75, 205); \n"
"    color: white; \n"
"    border: 2px solid blue;\n"
"    border-radius: 5px;\n"
"    padding: 5px 10px; \n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: rgba(255, 255, 255, 0.2); \n"
"}"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 600, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QString());
        loginbutton->setText(QCoreApplication::translate("MainWindow", "Log in", nullptr));
        signinbutton->setText(QCoreApplication::translate("MainWindow", "Sign in", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
