#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "signupwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setFixedSize(600,600);
    connect(ui->signinbutton, &QPushButton::clicked, this, &MainWindow::on_signinbutton_clicked);
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
}

