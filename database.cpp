#include "database.h"

QSqlDatabase Database::connectDB() {
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("C:\\Users\\USER\\Desktop\\myexp\\users.db");  // Path to your SQLite database

    if (!db.open()) {
        qDebug() << "Error: Could not connect to database!";
    } else {
        qDebug() << "Database connected successfully!";
    }
    return db;
}

// Function to create users table
bool Database::createTable() {
    QSqlDatabase db = Database::connectDB();
    QSqlQuery query(db);

    QString createTableSQL = "CREATE TABLE IF NOT EXISTS users ("
                             "id INTEGER PRIMARY KEY AUTOINCREMENT, "
                             "username TEXT UNIQUE NOT NULL, "
                             "password TEXT NOT NULL)";

    if (!query.exec(createTableSQL)) {
        qDebug() << "Error creating table: " << query.lastError().text();
        return false;
    }

    qDebug() << "Users table created successfully!";
    return true;
}
