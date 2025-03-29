#ifndef SIGNUPWINDOW_H
#define SIGNUPWINDOW_H

#include <QMainWindow>
#include <QDialog>
#include <QtSql/QSqlDatabase>

namespace Ui {
class SignUpWindow;
}

class SignUpWindow : public QDialog
{
    Q_OBJECT

public:
    explicit SignUpWindow(QWidget *parent = nullptr);
    ~SignUpWindow();

private slots:
    void on_createaccbutton_clicked();
    void on_backbutton_clicked();

private:
    Ui::SignUpWindow *ui;
    QSqlDatabase db;

    void connectDatabase();
    bool insertUser(const QString &username, const QString &password);
};

#endif // SIGNUPWINDOW_H
