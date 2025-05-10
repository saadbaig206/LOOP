#include "database.h"
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>
#include <QCoreApplication>

QSqlDatabase Database::connectDB() {

    //path is changeddddd
    QString dbPath = "C:/Users/my pc/OneDrive/Desktop/Saadsversion/Social-Media-Application/users.db";

    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName(dbPath);

    qDebug() << "Connecting to SQLite DB at:" << dbPath;
    //

    if (!db.open()) {
        qDebug() << "Error: Could not connect to database!";
    } else {
        qDebug() << "Database connected successfully!";
    }
    return db;  // Return the database object
}
// QSqlDatabase Database::connectDB() {
//     QString connectionName = "MainConnection";
//     QSqlDatabase db;

//     if (QSqlDatabase::contains(connectionName)) {
//         db = QSqlDatabase::database(connectionName);
//     } else {
//         db = QSqlDatabase::addDatabase("QSQLITE", connectionName);
//         db.setDatabaseName("C:/Users/my pc/OneDrive/Desktop/LOOP/Social-Media-Application/users.db");

//         if (!db.open()) {
//             qDebug() << "Error: Could not connect to database!";
//         } else {
//             qDebug() << "Database connected successfully!";
//         }
//     }

//     return db;
// }

// Function to create users table
bool Database::createTable() {
    QSqlDatabase db = connectDB();  // Get the database object from connectDB

    if (!db.isOpen()) {  // Check if the database connection was successful
        return false;
    }

    QSqlQuery query(db);

    QString createTableSQL = "CREATE TABLE IF NOT EXISTS users ("
                             "id INTEGER PRIMARY KEY AUTOINCREMENT, "
                             "username TEXT UNIQUE NOT NULL, "
                             "password TEXT NOT NULL, "
                             "email TEXT NOT NULL, " //
                             "gender TEXT NOT NULL, "
                             "country TEXT NOT NULL, "
                             "birthday DATE NOT NULL"")"; //

    if (!query.exec(createTableSQL)) {
        qDebug() << "Error creating table: " << query.lastError().text();
        return false;
    }

    qDebug() << "Users table created successfully!";
    return true;
}

