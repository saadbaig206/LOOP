/********************************************************************************
** Form generated from reading UI file 'loginwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINWINDOW_H
#define UI_LOGINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_loginwindow
{
public:
    QPushButton *login;
    QPushButton *back;
    QLabel *passwordlable;
    QLabel *usernamelable;
    QLineEdit *usernamechecklineedit;
    QLabel *label_2;
    QLineEdit *passwordchecklineedit;
    QLabel *label;

    void setupUi(QDialog *loginwindow)
    {
        if (loginwindow->objectName().isEmpty())
            loginwindow->setObjectName("loginwindow");
        loginwindow->resize(600, 600);
        loginwindow->setMinimumSize(QSize(600, 600));
        loginwindow->setMaximumSize(QSize(600, 600));
        loginwindow->setStyleSheet(QString::fromUtf8("background-color:#FFFFFF;\n"
""));
        login = new QPushButton(loginwindow);
        login->setObjectName("login");
        login->setGeometry(QRect(80, 530, 201, 41));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        login->setFont(font);
        login->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #10B981;\n"
"    color: white;\n"
"    border-radius: 8px;\n"
"    padding: 10px 20px;\n"
"    font-weight: bold;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #059669;\n"
"}"));
        back = new QPushButton(loginwindow);
        back->setObjectName("back");
        back->setGeometry(QRect(330, 530, 201, 41));
        back->setFont(font);
        back->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #10B981;\n"
"    color: white;\n"
"    border-radius: 8px;\n"
"    padding: 10px 20px;\n"
"    font-weight: bold;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #059669;\n"
"}"));
        passwordlable = new QLabel(loginwindow);
        passwordlable->setObjectName("passwordlable");
        passwordlable->setGeometry(QRect(10, 460, 141, 41));
        passwordlable->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    background-color: #10B981;\n"
"    color: white;\n"
"    border-radius: 8px;\n"
"    padding: 10px 20px;\n"
"    font-weight: bold;\n"
"}\n"
""));
        passwordlable->setAlignment(Qt::AlignmentFlag::AlignCenter);
        usernamelable = new QLabel(loginwindow);
        usernamelable->setObjectName("usernamelable");
        usernamelable->setGeometry(QRect(10, 390, 141, 41));
        usernamelable->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    background-color: #10B981;\n"
"    color: white;\n"
"    border-radius: 8px;\n"
"    padding: 10px 20px;\n"
"    font-weight: bold;\n"
"}\n"
""));
        usernamelable->setAlignment(Qt::AlignmentFlag::AlignCenter);
        usernamechecklineedit = new QLineEdit(loginwindow);
        usernamechecklineedit->setObjectName("usernamechecklineedit");
        usernamechecklineedit->setGeometry(QRect(170, 390, 391, 41));
        usernamechecklineedit->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border: 1px solid #D1D5DB;\n"
"    border-radius: 8px;\n"
"    padding: 8px;\n"
"    background-color: #F9FAFB;\n"
"    color: #111827;\n"
"}\n"
"QLineEdit:focus {\n"
"    border: 1px solid #10B981;\n"
"    background: #FFFFFF;\n"
"}"));
        label_2 = new QLabel(loginwindow);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(170, 130, 251, 200));
        label_2->setMinimumSize(QSize(200, 200));
        label_2->setStyleSheet(QString::fromUtf8("background-color: white;\n"
""));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/image/logo1.jpg")));
        label_2->setScaledContents(true);
        label_2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        passwordchecklineedit = new QLineEdit(loginwindow);
        passwordchecklineedit->setObjectName("passwordchecklineedit");
        passwordchecklineedit->setGeometry(QRect(170, 460, 391, 41));
        passwordchecklineedit->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border: 1px solid #D1D5DB;\n"
"    border-radius: 8px;\n"
"    padding: 8px;\n"
"    background-color: #F9FAFB;\n"
"    color: #111827;\n"
"}\n"
"QLineEdit:focus {\n"
"    border: 1px solid #10B981;\n"
"    background: #FFFFFF;\n"
"}"));
        label = new QLabel(loginwindow);
        label->setObjectName("label");
        label->setGeometry(QRect(110, 70, 371, 51));
        QFont font1;
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #6B7280 BOLD; /* Gray-500 */\n"
"    font-size: 16px;\n"
"    font-style: italicgrey;\n"
"    letter-spacing: 0.5px;\n"
"    padding: 4px 0;\n"
"}"));
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);
        passwordlable->raise();
        usernamelable->raise();
        usernamechecklineedit->raise();
        login->raise();
        back->raise();
        label_2->raise();
        passwordchecklineedit->raise();
        label->raise();

        retranslateUi(loginwindow);

        QMetaObject::connectSlotsByName(loginwindow);
    } // setupUi

    void retranslateUi(QDialog *loginwindow)
    {
        loginwindow->setWindowTitle(QCoreApplication::translate("loginwindow", "Dialog", nullptr));
        login->setText(QCoreApplication::translate("loginwindow", "Login", nullptr));
        back->setText(QCoreApplication::translate("loginwindow", "Back", nullptr));
        passwordlable->setText(QCoreApplication::translate("loginwindow", "Password", nullptr));
        usernamelable->setText(QCoreApplication::translate("loginwindow", "Username", nullptr));
        label_2->setText(QString());
        label->setText(QCoreApplication::translate("loginwindow", "Stay In The Loop With People", nullptr));
    } // retranslateUi

};

namespace Ui {
    class loginwindow: public Ui_loginwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINWINDOW_H
