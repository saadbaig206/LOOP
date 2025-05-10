/********************************************************************************
** Form generated from reading UI file 'signupwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNUPWINDOW_H
#define UI_SIGNUPWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_SignUpWindow
{
public:
    QPushButton *createaccbutton;
    QPushButton *backbutton;
    QLabel *firstnamelabel;
    QLabel *genderlable;
    QLabel *passwordlable;
    QLabel *usernamelable;
    QLabel *lastnamelable;
    QLabel *birthdaylable;
    QLabel *countrylable;
    QLineEdit *namelineedit;
    QLineEdit *usernamelineedit;
    QLineEdit *emaillineedit;
    QLineEdit *passwordlineedit;
    QRadioButton *malebutton;
    QRadioButton *femalebutton;
    QComboBox *countrycombobox;
    QComboBox *monthcombobox;
    QSpinBox *datespinbox;
    QSpinBox *yearspinbox;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QDialog *SignUpWindow)
    {
        if (SignUpWindow->objectName().isEmpty())
            SignUpWindow->setObjectName("SignUpWindow");
        SignUpWindow->resize(600, 600);
        SignUpWindow->setMinimumSize(QSize(600, 600));
        SignUpWindow->setMaximumSize(QSize(600, 600));
        SignUpWindow->setStyleSheet(QString::fromUtf8("background-color: white ;"));
        createaccbutton = new QPushButton(SignUpWindow);
        createaccbutton->setObjectName("createaccbutton");
        createaccbutton->setGeometry(QRect(70, 530, 191, 41));
        QFont font;
        font.setPointSize(11);
        createaccbutton->setFont(font);
        createaccbutton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        backbutton = new QPushButton(SignUpWindow);
        backbutton->setObjectName("backbutton");
        backbutton->setGeometry(QRect(310, 530, 191, 41));
        backbutton->setFont(font);
        backbutton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        firstnamelabel = new QLabel(SignUpWindow);
        firstnamelabel->setObjectName("firstnamelabel");
        firstnamelabel->setGeometry(QRect(10, 60, 131, 41));
        firstnamelabel->setStyleSheet(QString::fromUtf8("QLabel {\n"
"   background-color: rgb(86, 75, 205); \n"
"    color: white; \n"
"    border: 2px solid blue;\n"
"    border-radius: 5px;\n"
"    padding: 5px 10px; \n"
"}"));
        firstnamelabel->setAlignment(Qt::AlignmentFlag::AlignCenter);
        genderlable = new QLabel(SignUpWindow);
        genderlable->setObjectName("genderlable");
        genderlable->setGeometry(QRect(10, 300, 131, 41));
        genderlable->setStyleSheet(QString::fromUtf8("QLabel {\n"
"   background-color: rgb(86, 75, 205); \n"
"    color: white; \n"
"    border: 2px solid blue;\n"
"    border-radius: 5px;\n"
"    padding: 5px 10px; \n"
"}"));
        genderlable->setAlignment(Qt::AlignmentFlag::AlignCenter);
        passwordlable = new QLabel(SignUpWindow);
        passwordlable->setObjectName("passwordlable");
        passwordlable->setGeometry(QRect(10, 240, 131, 41));
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
        usernamelable->setGeometry(QRect(10, 180, 131, 41));
        usernamelable->setStyleSheet(QString::fromUtf8("QLabel {\n"
"   background-color: rgb(86, 75, 205); \n"
"    color: white; \n"
"    border: 2px solid blue;\n"
"    border-radius: 5px;\n"
"    padding: 5px 10px; \n"
"}"));
        usernamelable->setAlignment(Qt::AlignmentFlag::AlignCenter);
        lastnamelable = new QLabel(SignUpWindow);
        lastnamelable->setObjectName("lastnamelable");
        lastnamelable->setGeometry(QRect(10, 120, 131, 41));
        lastnamelable->setStyleSheet(QString::fromUtf8("QLabel {\n"
"   background-color: rgb(86, 75, 205); \n"
"    color: white; \n"
"    border: 2px solid blue;\n"
"    border-radius: 5px;\n"
"    padding: 5px 10px; \n"
"}"));
        lastnamelable->setAlignment(Qt::AlignmentFlag::AlignCenter);
        birthdaylable = new QLabel(SignUpWindow);
        birthdaylable->setObjectName("birthdaylable");
        birthdaylable->setGeometry(QRect(10, 420, 131, 41));
        birthdaylable->setStyleSheet(QString::fromUtf8("QLabel {\n"
"   background-color: rgb(86, 75, 205); \n"
"    color: white; \n"
"    border: 2px solid blue;\n"
"    border-radius: 5px;\n"
"    padding: 5px 10px; \n"
"}"));
        birthdaylable->setAlignment(Qt::AlignmentFlag::AlignCenter);
        countrylable = new QLabel(SignUpWindow);
        countrylable->setObjectName("countrylable");
        countrylable->setGeometry(QRect(10, 360, 131, 41));
        countrylable->setStyleSheet(QString::fromUtf8("QLabel {\n"
"   background-color: rgb(86, 75, 205); \n"
"    color: white; \n"
"    border: 2px solid blue;\n"
"    border-radius: 5px;\n"
"    padding: 5px 10px; \n"
"}"));
        countrylable->setAlignment(Qt::AlignmentFlag::AlignCenter);
        namelineedit = new QLineEdit(SignUpWindow);
        namelineedit->setObjectName("namelineedit");
        namelineedit->setGeometry(QRect(160, 60, 401, 41));
        namelineedit->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    color: white;\n"
"    background-color:darkgrey;\n"
"    border: 1px solid white;\n"
"border-radius: 8px;\n"
"padding: 4px;}"));
        usernamelineedit = new QLineEdit(SignUpWindow);
        usernamelineedit->setObjectName("usernamelineedit");
        usernamelineedit->setGeometry(QRect(160, 180, 401, 41));
        usernamelineedit->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    color: white;\n"
"    background-color: darkgrey;\n"
"    border: 1px solid white;\n"
"border-radius: 8px;\n"
"padding: 4px;}"));
        emaillineedit = new QLineEdit(SignUpWindow);
        emaillineedit->setObjectName("emaillineedit");
        emaillineedit->setGeometry(QRect(160, 120, 401, 41));
        emaillineedit->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    color: white;\n"
"    background-color: darkgrey;\n"
"    border: 1px solid white;\n"
"border-radius: 8px;\n"
"padding: 4px;}"));
        passwordlineedit = new QLineEdit(SignUpWindow);
        passwordlineedit->setObjectName("passwordlineedit");
        passwordlineedit->setGeometry(QRect(160, 240, 401, 41));
        passwordlineedit->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    color: white;\n"
"    background-color: darkgrey;\n"
"    border: 1px solid white;\n"
"border-radius: 8px;\n"
"padding: 4px;}"));
        malebutton = new QRadioButton(SignUpWindow);
        malebutton->setObjectName("malebutton");
        malebutton->setGeometry(QRect(210, 310, 101, 31));
        malebutton->setStyleSheet(QString::fromUtf8("QRadioButton{\n"
" color: white;\n"
"}"));
        femalebutton = new QRadioButton(SignUpWindow);
        femalebutton->setObjectName("femalebutton");
        femalebutton->setGeometry(QRect(370, 310, 91, 31));
        femalebutton->setStyleSheet(QString::fromUtf8("QRadioButton{\n"
" color: white;\n"
"}"));
        countrycombobox = new QComboBox(SignUpWindow);
        countrycombobox->setObjectName("countrycombobox");
        countrycombobox->setGeometry(QRect(160, 361, 371, 31));
        countrycombobox->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"    color: black; \n"
"    background-color: white; \n"
"}\n"
"QComboBox QAbstractItemView {\n"
"    color: black; \n"
"    background-color:white; \n"
"    selection-background-color: blue; \n"
"    selection-color: blue; }"));
        monthcombobox = new QComboBox(SignUpWindow);
        monthcombobox->setObjectName("monthcombobox");
        monthcombobox->setGeometry(QRect(160, 430, 131, 31));
        monthcombobox->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"    color: black; \n"
"    background-color: white; \n"
"}\n"
"QComboBox QAbstractItemView {\n"
"    color: black; \n"
"    background-color:white; \n"
"    selection-background-color: blue; \n"
"    selection-color: blue; }"));
        datespinbox = new QSpinBox(SignUpWindow);
        datespinbox->setObjectName("datespinbox");
        datespinbox->setGeometry(QRect(310, 430, 91, 31));
        datespinbox->setStyleSheet(QString::fromUtf8("QSpinBox {\n"
"    color: black; \n"
"    background-color: white; \n"
"    border: 1px solid black; \n"
"}"));
        datespinbox->setMinimum(1);
        datespinbox->setMaximum(31);
        yearspinbox = new QSpinBox(SignUpWindow);
        yearspinbox->setObjectName("yearspinbox");
        yearspinbox->setGeometry(QRect(420, 430, 111, 31));
        yearspinbox->setStyleSheet(QString::fromUtf8("QSpinBox {\n"
"    color: black; \n"
"    background-color: white; \n"
"    border: 1px solid black; \n"
"}"));
        yearspinbox->setMinimum(1970);
        yearspinbox->setMaximum(2025);
        label = new QLabel(SignUpWindow);
        label->setObjectName("label");
        label->setGeometry(QRect(200, 470, 61, 16));
        label->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: white; \n"
"}"));
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_2 = new QLabel(SignUpWindow);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(310, 470, 71, 20));
        label_2->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: white; \n"
"}"));
        label_2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_3 = new QLabel(SignUpWindow);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(440, 470, 81, 16));
        label_3->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: white; \n"
"}"));
        label_3->setAlignment(Qt::AlignmentFlag::AlignCenter);
        backbutton->raise();
        birthdaylable->raise();
        countrycombobox->raise();
        countrylable->raise();
        createaccbutton->raise();
        datespinbox->raise();
        femalebutton->raise();
        firstnamelabel->raise();
        namelineedit->raise();
        genderlable->raise();
        label->raise();
        label_2->raise();
        label_3->raise();
        lastnamelable->raise();
        emaillineedit->raise();
        malebutton->raise();
        monthcombobox->raise();
        passwordlable->raise();
        passwordlineedit->raise();
        usernamelable->raise();
        usernamelineedit->raise();
        yearspinbox->raise();

        retranslateUi(SignUpWindow);

        QMetaObject::connectSlotsByName(SignUpWindow);
    } // setupUi

    void retranslateUi(QDialog *SignUpWindow)
    {
        SignUpWindow->setWindowTitle(QCoreApplication::translate("SignUpWindow", "Dialog", nullptr));
        createaccbutton->setText(QCoreApplication::translate("SignUpWindow", "Create Account", nullptr));
        backbutton->setText(QCoreApplication::translate("SignUpWindow", "Go Back", nullptr));
        firstnamelabel->setText(QCoreApplication::translate("SignUpWindow", "Name", nullptr));
        genderlable->setText(QCoreApplication::translate("SignUpWindow", "Gender", nullptr));
        passwordlable->setText(QCoreApplication::translate("SignUpWindow", "Password", nullptr));
        usernamelable->setText(QCoreApplication::translate("SignUpWindow", "Username", nullptr));
        lastnamelable->setText(QCoreApplication::translate("SignUpWindow", "Email", nullptr));
        birthdaylable->setText(QCoreApplication::translate("SignUpWindow", "Birthday", nullptr));
        countrylable->setText(QCoreApplication::translate("SignUpWindow", "Country", nullptr));
        malebutton->setText(QCoreApplication::translate("SignUpWindow", "Male", nullptr));
        femalebutton->setText(QCoreApplication::translate("SignUpWindow", "Female", nullptr));
        monthcombobox->setCurrentText(QString());
        label->setText(QCoreApplication::translate("SignUpWindow", "Month", nullptr));
        label_2->setText(QCoreApplication::translate("SignUpWindow", "Date", nullptr));
        label_3->setText(QCoreApplication::translate("SignUpWindow", "Year", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SignUpWindow: public Ui_SignUpWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUPWINDOW_H
