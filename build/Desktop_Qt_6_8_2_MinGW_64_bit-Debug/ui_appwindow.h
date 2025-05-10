/********************************************************************************
** Form generated from reading UI file 'appwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_APPWINDOW_H
#define UI_APPWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_appwindow
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QTabWidget *tabWidget;
    QWidget *home;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QTextEdit *textEdit;
    QPushButton *pushButton;
    QLabel *label;
    QLabel *label_2;
    QWidget *profile;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_9;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_6;
    QLineEdit *lineEdit_7;
    QWidget *friends;
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_2;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QWidget *notifications;
    QWidget *settings;

    void setupUi(QDialog *appwindow)
    {
        if (appwindow->objectName().isEmpty())
            appwindow->setObjectName("appwindow");
        appwindow->setEnabled(true);
        appwindow->resize(1140, 1140);
        appwindow->setMinimumSize(QSize(600, 600));
        appwindow->setMaximumSize(QSize(1140, 1140));
        appwindow->setStyleSheet(QString::fromUtf8("background-color: rgb(15, 13, 35) ;"));
        gridLayout = new QGridLayout(appwindow);
        gridLayout->setObjectName("gridLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        tabWidget = new QTabWidget(appwindow);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setStyleSheet(QString::fromUtf8("QTabWidget::pane {\n"
"    border: 1px solid #444;\n"
"    background: #1e1e2f; \n"
"}\n"
"\n"
"QTabBar::tab {\n"
"    background:rgb(11, 10, 27);\n"
"    color: white;\n"
"    padding: 8px;\n"
"    border: 1px solid #222;\n"
"    border-bottom: none;\n"
"    border-top-left-radius: 4px;\n"
"    border-top-right-radius: 4px;\n"
"    min-width: 80px;\n"
"}\n"
"\n"
"QTabBar::tab:selected {\n"
"    background: rgb(53, 46, 124); \n"
"    font-weight: bold;\n"
"}"));
        home = new QWidget();
        home->setObjectName("home");
        scrollArea = new QScrollArea(home);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setGeometry(QRect(30, 30, 691, 1011));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 689, 1009));
        verticalLayoutWidget = new QWidget(scrollAreaWidgetContents);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(-5, -5, 701, 1021));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        scrollArea->setWidget(scrollAreaWidgetContents);
        textEdit = new QTextEdit(home);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(770, 30, 321, 261));
        pushButton = new QPushButton(home);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(860, 310, 181, 41));
        QFont font;
        font.setPointSize(14);
        font.setBold(false);
        font.setItalic(false);
        font.setUnderline(false);
        font.setStrikeOut(false);
        font.setKerning(true);
        pushButton->setFont(font);
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgb(86, 75, 205); \n"
"    color: white; \n"
"    border: 2px solid blue;\n"
"    border-radius: 5px;\n"
"    padding: 5px 10px; \n"
"}\n"
"\n"
"QPushButton:hover {\n"
"   background-color: qlineargradient(\n"
"x1:0, y1:0, x2:1, y2:1,\n"
"        stop:0 rgba(70, 130, 180, 255),\n"
"        stop:1 rgba(25, 25, 112, 255)\n"
"    );\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(\n"
"        x1:0, y1:0, x2:1, y2:1,\n"
"        stop:0 rgba(135, 206, 250, 255),\n"
"        stop:1 rgba(70, 130, 180, 255)\n"
"    )\n"
"}"));
        label = new QLabel(home);
        label->setObjectName("label");
        label->setGeometry(QRect(40, 10, 161, 16));
        label->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: white;  \n"
"}"));
        label_2 = new QLabel(home);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(770, 10, 161, 16));
        label_2->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: white;  \n"
"}"));
        tabWidget->addTab(home, QString());
        profile = new QWidget();
        profile->setObjectName("profile");
        label_3 = new QLabel(profile);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(170, 130, 101, 31));
        label_3->setStyleSheet(QString::fromUtf8("QLabel {\n"
"   background-color: rgb(86, 75, 205); \n"
"    color: white; \n"
"    border: 2px solid blue;\n"
"    border-radius: 5px;\n"
"    padding: 5px 10px; \n"
"}"));
        label_3->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_4 = new QLabel(profile);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(170, 180, 101, 31));
        label_4->setStyleSheet(QString::fromUtf8("QLabel {\n"
"   background-color: rgb(86, 75, 205); \n"
"    color: white; \n"
"    border: 2px solid blue;\n"
"    border-radius: 5px;\n"
"    padding: 5px 10px; \n"
"}"));
        label_4->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_5 = new QLabel(profile);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(170, 230, 101, 31));
        label_5->setStyleSheet(QString::fromUtf8("QLabel {\n"
"   background-color: rgb(86, 75, 205); \n"
"    color: white; \n"
"    border: 2px solid blue;\n"
"    border-radius: 5px;\n"
"    padding: 5px 10px; \n"
"}"));
        label_5->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_6 = new QLabel(profile);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(170, 280, 101, 31));
        label_6->setStyleSheet(QString::fromUtf8("QLabel {\n"
"   background-color: rgb(86, 75, 205); \n"
"    color: white; \n"
"    border: 2px solid blue;\n"
"    border-radius: 5px;\n"
"    padding: 5px 10px; \n"
"}"));
        label_6->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_7 = new QLabel(profile);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(170, 330, 101, 31));
        label_7->setStyleSheet(QString::fromUtf8("QLabel {\n"
"   background-color: rgb(86, 75, 205); \n"
"    color: white; \n"
"    border: 2px solid blue;\n"
"    border-radius: 5px;\n"
"    padding: 5px 10px; \n"
"}"));
        label_7->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_9 = new QLabel(profile);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(170, 380, 101, 31));
        label_9->setStyleSheet(QString::fromUtf8("QLabel {\n"
"   background-color: rgb(86, 75, 205); \n"
"    color: white; \n"
"    border: 2px solid blue;\n"
"    border-radius: 5px;\n"
"    padding: 5px 10px; \n"
"}"));
        label_9->setAlignment(Qt::AlignmentFlag::AlignCenter);
        lineEdit_2 = new QLineEdit(profile);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(290, 130, 261, 31));
        lineEdit_2->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    color: white;\n"
"    background-color: rgb(15, 13, 35);\n"
"    border: 1px solid white;\n"
"border-radius: 8px;\n"
"padding: 4px;}"));
        lineEdit_3 = new QLineEdit(profile);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setGeometry(QRect(290, 180, 261, 31));
        lineEdit_3->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    color: white;\n"
"    background-color: rgb(15, 13, 35);\n"
"    border: 1px solid white;\n"
"border-radius: 8px;\n"
"padding: 4px;}"));
        lineEdit_4 = new QLineEdit(profile);
        lineEdit_4->setObjectName("lineEdit_4");
        lineEdit_4->setGeometry(QRect(290, 230, 261, 31));
        lineEdit_4->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    color: white;\n"
"    background-color: rgb(15, 13, 35);\n"
"    border: 1px solid white;\n"
"border-radius: 8px;\n"
"padding: 4px;}"));
        lineEdit_5 = new QLineEdit(profile);
        lineEdit_5->setObjectName("lineEdit_5");
        lineEdit_5->setGeometry(QRect(290, 280, 271, 31));
        lineEdit_5->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    color: white;\n"
"    background-color: rgb(15, 13, 35);\n"
"    border: 1px solid white;\n"
"border-radius: 8px;\n"
"padding: 4px;}"));
        lineEdit_6 = new QLineEdit(profile);
        lineEdit_6->setObjectName("lineEdit_6");
        lineEdit_6->setGeometry(QRect(290, 330, 271, 31));
        lineEdit_6->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    color: white;\n"
"    background-color: rgb(15, 13, 35);\n"
"    border: 1px solid white;\n"
"border-radius: 8px;\n"
"padding: 4px;}"));
        lineEdit_7 = new QLineEdit(profile);
        lineEdit_7->setObjectName("lineEdit_7");
        lineEdit_7->setGeometry(QRect(290, 380, 271, 31));
        lineEdit_7->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    color: white;\n"
"    background-color: rgb(15, 13, 35);\n"
"    border: 1px solid white;\n"
"border-radius: 8px;\n"
"padding: 4px;}"));
        tabWidget->addTab(profile, QString());
        friends = new QWidget();
        friends->setObjectName("friends");
        scrollArea_2 = new QScrollArea(friends);
        scrollArea_2->setObjectName("scrollArea_2");
        scrollArea_2->setGeometry(QRect(49, 50, 471, 581));
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName("scrollAreaWidgetContents_2");
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 469, 579));
        scrollArea_2->setWidget(scrollAreaWidgetContents_2);
        pushButton_2 = new QPushButton(friends);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(670, 340, 151, 51));
        QFont font1;
        font1.setPointSize(11);
        pushButton_2->setFont(font1);
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgb(86, 75, 205); \n"
"    color: white; \n"
"    border: 2px solid blue;\n"
"    border-radius: 5px;\n"
"    padding: 5px 10px; \n"
"}\n"
"\n"
"QPushButton:hover {\n"
"   background-color: qlineargradient(\n"
"x1:0, y1:0, x2:1, y2:1,\n"
"        stop:0 rgba(70, 130, 180, 255),\n"
"        stop:1 rgba(25, 25, 112, 255)\n"
"    );\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(\n"
"        x1:0, y1:0, x2:1, y2:1,\n"
"        stop:0 rgba(135, 206, 250, 255),\n"
"        stop:1 rgba(70, 130, 180, 255)\n"
"    )\n"
"}"));
        pushButton_3 = new QPushButton(friends);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(670, 250, 151, 51));
        pushButton_3->setFont(font1);
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgb(86, 75, 205); \n"
"    color: white; \n"
"    border: 2px solid blue;\n"
"    border-radius: 5px;\n"
"    padding: 5px 10px; \n"
"}\n"
"\n"
"QPushButton:hover {\n"
"   background-color: qlineargradient(\n"
"x1:0, y1:0, x2:1, y2:1,\n"
"        stop:0 rgba(70, 130, 180, 255),\n"
"        stop:1 rgba(25, 25, 112, 255)\n"
"    );\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(\n"
"        x1:0, y1:0, x2:1, y2:1,\n"
"        stop:0 rgba(135, 206, 250, 255),\n"
"        stop:1 rgba(70, 130, 180, 255)\n"
"    )\n"
"}"));
        tabWidget->addTab(friends, QString());
        notifications = new QWidget();
        notifications->setObjectName("notifications");
        tabWidget->addTab(notifications, QString());
        settings = new QWidget();
        settings->setObjectName("settings");
        tabWidget->addTab(settings, QString());

        horizontalLayout->addWidget(tabWidget);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);


        retranslateUi(appwindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(appwindow);
    } // setupUi

    void retranslateUi(QDialog *appwindow)
    {
        appwindow->setWindowTitle(QCoreApplication::translate("appwindow", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("appwindow", "Post", nullptr));
        label->setText(QCoreApplication::translate("appwindow", "Newsfeed", nullptr));
        label_2->setText(QCoreApplication::translate("appwindow", "What's on your mind?", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(home), QCoreApplication::translate("appwindow", "Home", nullptr));
        label_3->setText(QCoreApplication::translate("appwindow", "Name", nullptr));
        label_4->setText(QCoreApplication::translate("appwindow", "Email", nullptr));
        label_5->setText(QCoreApplication::translate("appwindow", "Password", nullptr));
        label_6->setText(QCoreApplication::translate("appwindow", "Date Of Birth", nullptr));
        label_7->setText(QCoreApplication::translate("appwindow", "Country", nullptr));
        label_9->setText(QCoreApplication::translate("appwindow", "Gender", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(profile), QCoreApplication::translate("appwindow", "Profile", nullptr));
        pushButton_2->setText(QCoreApplication::translate("appwindow", "Unfriend", nullptr));
        pushButton_3->setText(QCoreApplication::translate("appwindow", "View", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(friends), QCoreApplication::translate("appwindow", "Friends", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(notifications), QCoreApplication::translate("appwindow", "Notifications", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(settings), QCoreApplication::translate("appwindow", "Settings", nullptr));
    } // retranslateUi

};

namespace Ui {
    class appwindow: public Ui_appwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APPWINDOW_H
