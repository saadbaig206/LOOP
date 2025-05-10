#include "signupwindow.h"
#include "ui_signupwindow.h"
#include "database.h"
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlError>
#include <QMessageBox>

SignUpWindow::SignUpWindow(QWidget *parent)
    : QDialog(parent), ui(new Ui::SignUpWindow)
{
    ui->setupUi(this);
    Database::connectDB();

    ui->countrycombobox->addItems({"Pakistan","USA","Canada","UK","Australia","Germany","UAE","India"});
    ui->monthcombobox->addItems({"January","February","March","April","May","June","July","August","September","October","November","December"});
}

SignUpWindow::~SignUpWindow()
{
    delete ui;
}

void SignUpWindow::on_createaccbutton_clicked() {
    QString username = ui->usernamelineedit->text();
    QString password = ui->passwordlineedit->text();
     QString email = ui->emaillineedit->text();
    QString gender = ui->malebutton->isChecked() ? "Male" : "Female";
    QString country = ui->countrycombobox->currentText();

    int day = ui->datespinbox->value();
    int month = ui->monthcombobox->currentIndex() + 1;
    int year = ui->yearspinbox->value();
    QString birthday = QString("%1-%2-%3").arg(year).arg(month, 2, 10, QChar('0')).arg(day, 2, 10, QChar('0'));

    if (username.isEmpty() || password.isEmpty()||email.isEmpty()) {
        QMessageBox::warning(this, "Input Error", "Please fill in all fields.");
        return;
    }

    QSqlDatabase db = Database::connectDB();
    QSqlQuery query(db);

   //  QSqlDatabase db = QSqlDatabase::database("MainConnection");
   // QSqlQuery query(QSqlDatabase::database("MainConnection"));
   //  //
   query.prepare("INSERT INTO users (username, password, email, gender, country, birthday) VALUES (:username, :password, :email, :gender, :country, :birthday)");
    // QString sql = R"(INSERT INTO users
    //             (username, password, email, gender, country, birthday)
    //             VALUES
    //             (:username, :password, :email, :gender, :country, :birthday))";
    // query.prepare(sql);
    query.bindValue(":username", username);
    query.bindValue(":password", password);
    query.bindValue(":email", email);
    query.bindValue(":gender", gender);
    query.bindValue(":country", country);
    query.bindValue(":birthday", birthday);
    //
    qDebug() << "Is prepared?" << query.isActive();
    qDebug() << "Last error:" << query.lastError().text();
    qDebug() << "Driver name:" << db.driverName();
    qDebug() << "Executing query with values:";
    qDebug() << username << password << email << gender << country << birthday;

//
    if (query.exec()) {
        QMessageBox::information(this, "Success", "Account created successfully!");
        this->close();
    } else {
        qDebug() << "SQL Error: " << query.lastError().text();


        QMessageBox::critical(this, "Error", "Failed to create account: " + query.lastError().text());
    }
}

void SignUpWindow::on_backbutton_clicked() {
    this->close();
}
