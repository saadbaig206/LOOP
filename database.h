#ifndef DATABASE_H
#define DATABASE_H

#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlError>
#include <QDebug>

class Database {
public:
    static QSqlDatabase connectDB();
    static bool createTable();  // Function to create the users table
};

#endif // DATABASE_H

