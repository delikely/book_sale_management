#ifndef OPEN_DB_H
#define OPEN_DB_H
#include"QSqlDatabase"
bool open(QSqlDatabase db)
{
    db=QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("127.0.0.1");
    db.setUserName("root");
    db.setPassword("toor");
    db.setPort(3306);
    db.setDatabaseName("book");
    return db.open();
}
#endif // OPEN_DB_H
