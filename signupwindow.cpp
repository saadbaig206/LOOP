#include "signupwindow.h"
#include "ui_signupwindow.h"
#include "database.h"
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlError>
#include <QMessageBox>

SignUpWindow::SignUpWindow(QWidget *parent)
    : QDialog(parent),ui(new Ui::SignUpWindow)
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

    if (username.isEmpty() || password.isEmpty()) {
        QMessageBox::warning(this, "Input Error", "Please fill in all fields.");
        return;
    }

    QSqlDatabase db = Database::connectDB();
    QSqlQuery query(db);
    query.prepare("INSERT INTO users (username, password) VALUES (:username, :password)");
    query.bindValue(":username", username);
    query.bindValue(":password", password);

    if (query.exec()) {
        QMessageBox::information(this, "Success", "Account created successfully!");
        this->close();  // Close the sign-up window
    } else {
        QMessageBox::critical(this, "Error", "Failed to create account: " + query.lastError().text());
    }
}

void SignUpWindow::on_backbutton_clicked() {
    this->close();  // Close the window and go back
}
