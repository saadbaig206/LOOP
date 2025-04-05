#ifndef LOGINWINDOW_H
#define LOGINWINDOW_H

#include <QDialog>
#include <QtSql/QSqlDatabase>

namespace Ui {
class loginwindow;
}

class loginwindow : public QDialog
{
    Q_OBJECT

public:
    explicit loginwindow(QWidget *parent = nullptr);
    ~loginwindow();

private slots:
    void on_back_clicked();
    void on_login_clicked();

private:
    Ui::loginwindow *ui;  // ✅ This must match the Ui class generated from ui_loginwindow.h
    QSqlDatabase db;
};

#endif // LOGINWINDOW_H


