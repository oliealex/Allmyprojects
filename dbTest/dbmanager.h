#ifndef DBMANAGER_H
#define DBMANAGER_H

#include <qsqldatabase.h>
#include <qsqlquery.h>
#include <qsqlrecord.h>
#include <QDebug>
#include <string.h>

class DbManager
{
private:
    QSqlDatabase m_db;
public:
    DbManager(const QString& path);

    //Adds employee to Db
    bool addEmployee(const QString &name);
    //Get employee
    void getEmployee();
};

#endif // DBMANAGER_H
