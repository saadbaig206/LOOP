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
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_SignUpWindow
{
public:
    QPushButton *createaccbutton;
    QPushButton *backbutton;
    QLabel *passwordlable;
    QLabel *usernamelable;
    QLineEdit *usernamelineedit;
    QLineEdit *passwordlineedit;
    QLabel *label;
    QPlainTextEdit *plainTextEdit;

    void setupUi(QDialog *SignUpWindow)
    {
        if (SignUpWindow->objectName().isEmpty())
            SignUpWindow->setObjectName("SignUpWindow");
        SignUpWindow->resize(600, 600);
        SignUpWindow->setMinimumSize(QSize(600, 600));
        SignUpWindow->setMaximumSize(QSize(600, 600));
        SignUpWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(15, 13, 35) ;"));
        createaccbutton = new QPushButton(SignUpWindow);
        createaccbutton->setObjectName("createaccbutton");
        createaccbutton->setGeometry(QRect(160, 530, 131, 41));
        QFont font;
        createaccbutton->setFont(font);
        createaccbutton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgb(86, 75, 205); \n"
"    color: white; \n"
"    border: 2px solid blue;\n"
"    border-radius: 5px;\n"
"    padding: 5px 10px;\n"
"	font-size:17px;\n"
" \n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: rgba(255, 255, 255, 0.2); \n"
"}"));
        backbutton = new QPushButton(SignUpWindow);
        backbutton->setObjectName("backbutton");
        backbutton->setGeometry(QRect(330, 530, 141, 41));
        backbutton->setFont(font);
        backbutton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgb(86, 75, 205); \n"
"    color: white; \n"
"    border: 2px solid blue;\n"
"    border-radius: 5px;\n"
"    padding: 5px 10px; \n"
"	font-size:17px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: rgba(255, 255, 255, 0.2); \n"
"}"));
        passwordlable = new QLabel(SignUpWindow);
        passwordlable->setObjectName("passwordlable");
        passwordlable->setGeometry(QRect(20, 460, 111, 31));
        passwordlable->setStyleSheet(QString::fromUtf8("QLabel {\n"
"   background-color: rgb(86, 75, 205); \n"
"    color: white; \n"
"    border: 2px solid blue;\n"
"    border-radius: 5px;\n"
"    padding: 5px 10px; \n"
"}"));
        passwordlable->setAlignment(Qt::AlignmentFlag::AlignCenter);
        usernamelable = new QLabel(SignUpWindow);
        usernamelable->setObjectName("usernamelable");
        usernamelable->setGeometry(QRect(20, 390, 111, 31));
        usernamelable->setStyleSheet(QString::fromUtf8("QLabel {\n"
"   background-color: rgb(86, 75, 205); \n"
"    color: white; \n"
"    border: 2px solid blue;\n"
"    border-radius: 5px;\n"
"    padding: 5px 10px; \n"
"}"));
        usernamelable->setAlignment(Qt::AlignmentFlag::AlignCenter);
        usernamelineedit = new QLineEdit(SignUpWindow);
        usernamelineedit->setObjectName("usernamelineedit");
        usernamelineedit->setGeometry(QRect(150, 390, 361, 31));
        usernamelineedit->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    color: white;\n"
"    background-color: rgb(15, 13, 35) ;\n"
"    border: 1px solid white; }"));
        passwordlineedit = new QLineEdit(SignUpWindow);
        passwordlineedit->setObjectName("passwordlineedit");
        passwordlineedit->setGeometry(QRect(150, 460, 361, 31));
        passwordlineedit->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    color: white;\n"
"    background-color: rgb(15, 13, 35) ;\n"
"    border: 1px solid white; }"));
        label = new QLabel(SignUpWindow);
        label->setObjectName("label");
        label->setGeometry(QRect(10, -40, 581, 631));
        label->setMinimumSize(QSize(200, 200));
        label->setPixmap(QPixmap(QString::fromUtf8(":/image/logo1.jpg")));
        label->setScaledContents(true);
        plainTextEdit = new QPlainTextEdit(SignUpWindow);
        plainTextEdit->setObjectName("plainTextEdit");
        plainTextEdit->setGeometry(QRect(160, 100, 371, 75));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Showcard Gothic")});
        font1.setStrikeOut(true);
        plainTextEdit->setFont(font1);
        plainTextEdit->setAutoFillBackground(false);
        plainTextEdit->setStyleSheet(QString::fromUtf8("QPlainTextEdit {\n"
"    background-color: #0A0F1F; /* Dark background (adjust to match your image) */\n"
"    color: white; /* White text */\n"
"    border: 2px solid #1E2A38; /* Subtle border */\n"
"    font-size: 14px; /* Adjust font size */\n"
"    padding: 5px; /* Add spacing inside */\n"
"    selection-background-color: #30475E; /* Highlight color */\n"
"    selection-color: white; /* Highlighted text color */\n"
"	font-size:18px;\n"
"	border:none;\n"
"}"));
        plainTextEdit->setReadOnly(false);
        plainTextEdit->setBackgroundVisible(false);
        label->raise();
        passwordlable->raise();
        passwordlineedit->raise();
        usernamelable->raise();
        usernamelineedit->raise();
        createaccbutton->raise();
        backbutton->raise();
        plainTextEdit->raise();

        retranslateUi(SignUpWindow);

        QMetaObject::connectSlotsByName(SignUpWindow);
    } // setupUi

    void retranslateUi(QDialog *SignUpWindow)
    {
        SignUpWindow->setWindowTitle(QCoreApplication::translate("SignUpWindow", "Dialog", nullptr));
        createaccbutton->setText(QCoreApplication::translate("SignUpWindow", "Login", nullptr));
        backbutton->setText(QCoreApplication::translate("SignUpWindow", "Back", nullptr));
        passwordlable->setText(QCoreApplication::translate("SignUpWindow", "Password", nullptr));
        usernamelable->setText(QCoreApplication::translate("SignUpWindow", "Username", nullptr));
        label->setText(QString());
        plainTextEdit->setPlainText(QCoreApplication::translate("SignUpWindow", "STAY IN THE LOOP WITH  PEOPLE", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SignUpWindow: public Ui_SignUpWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINWINDOW_H
