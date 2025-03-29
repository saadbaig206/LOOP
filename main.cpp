#include "mainwindow.h"
#include "database.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    Database::connectDB();  // Ensure database connection
    Database::createTable();
    w.show();
    return a.exec();
}
