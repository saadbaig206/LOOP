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
    QPushButton *loginbutton;
    QPushButton *signinbutton;
    QLabel *label_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(600, 600);
        MainWindow->setMinimumSize(QSize(600, 600));
        MainWindow->setMaximumSize(QSize(600, 600));
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: white;"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        loginbutton = new QPushButton(centralwidget);
        loginbutton->setObjectName("loginbutton");
        loginbutton->setGeometry(QRect(160, 430, 281, 51));
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe UI")});
        font.setWeight(QFont::DemiBold);
        loginbutton->setFont(font);
        loginbutton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #1F2937;      /* Dark gray / almost black */\n"
"    color: #FFFFFF;\n"
"    border: none;\n"
"    border-radius: 8px;\n"
"    padding: 10px 24px;\n"
"    font-size: 20px;\n"
"    font-weight: 600;\n"
"    font-family: \"Segoe UI\", sans-serif;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #374151;      /* Slightly lighter on hover */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #111827;      /* Even darker on click */\n"
"}\n"
"\n"
"QPushButton:disabled {\n"
"    background-color: #9CA3AF;      /* Muted gray for disabled */\n"
"    color: #F9FAFB;\n"
"}\n"
"\n"
""));
        signinbutton = new QPushButton(centralwidget);
        signinbutton->setObjectName("signinbutton");
        signinbutton->setGeometry(QRect(150, 350, 311, 51));
        QFont font1;
        font1.setBold(true);
        signinbutton->setFont(font1);
        signinbutton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #10B981; /* Teal Green */\n"
"    color: white;\n"
"    border: none;\n"
"    border-radius: 10px;\n"
"    padding: 10px 20px;\n"
"    font-size: 14px;\n"
"    font-weight: bold;\n"
"    letter-spacing: 0.5px;\n"
"    transition: background-color 0.3s ease;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #059669; /* Slightly darker on hover */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #047857; /* Even darker on click */\n"
"    padding-left: 11px; /* Simple feedback */\n"
"    padding-top: 11px;\n"
"}\n"
"\n"
"QPushButton:disabled {\n"
"    background-color: #D1D5DB; /* Light gray for disabled */\n"
"    color: #9CA3AF;             /* Muted text */\n"
"}\n"
""));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(60, 40, 491, 291));
        label_2->setMinimumSize(QSize(200, 200));
        label_2->setStyleSheet(QString::fromUtf8("background-color: white;"));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/image/logo1.jpg")));
        label_2->setScaledContents(true);
        MainWindow->setCentralWidget(centralwidget);
        label_2->raise();
        loginbutton->raise();
        signinbutton->raise();
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 600, 26));
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
        loginbutton->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        signinbutton->setText(QCoreApplication::translate("MainWindow", "Sign Up", nullptr));
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
