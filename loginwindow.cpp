#include "loginwindow.h"
#include "ui_loginwindow.h"  // THIS is required
#include "database.h"

#include <QMessageBox>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlError>

loginwindow::loginwindow(QWidget *parent)
    : QDialog(parent), ui(new Ui::loginwindow)
{
    ui->setupUi(this);
    db = Database::connectDB();
}

loginwindow::~loginwindow()
{
    delete ui;
}

void loginwindow::on_back_clicked()
{
    this->close();
}
void loginwindow::on_login_clicked()
{
    QString username = ui->usernamelineedit->text();
    QString password = ui->passwordlineedit->text();

    if (username.isEmpty() || password.isEmpty()) {
        QMessageBox::warning(this, "Input Error", "Please fill in all fields.");
        return;
    }

    QSqlQuery query(db);
    query.prepare("SELECT * FROM users WHERE username = :username AND password = :password");
    query.bindValue(":username", username);
    query.bindValue(":password", password);

    if (query.exec() && query.next()) {
        QMessageBox::information(this, "Login", "Login successful!");
        this->close();
    } else {
        QMessageBox::critical(this, "Error", "Invalid username or password.");
    }
}
