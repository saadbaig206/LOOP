#include "mainwindow.h"
#include "loginwindow.h"
#include "ui_mainwindow.h"
#include "signupwindow.h"
#include "loginwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setFixedSize(600,600);

    connect(ui->signinbutton, &QPushButton::clicked, this, &MainWindow::on_signinbutton_clicked);
    connect(ui->loginbutton, &QPushButton::clicked, this, &MainWindow::on_loginbutton_clicked); // Add this
}


MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_signinbutton_clicked()
{
    // Create a SignUpWindow instance
    SignUpWindow *signUp = new SignUpWindow(this);

    // Show the signup window
    signUp->show();
    this->close();
}
void MainWindow::on_loginbutton_clicked()
{
    loginwindow *login = new loginwindow(this);
    login->exec();
    this->close();
}

