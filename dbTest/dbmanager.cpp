#include "dbmanager.h"

DbManager::DbManager(const QString& path)
{
    this->m_db = QSqlDatabase::addDatabase("QSQLITE");
    this->m_db.setDatabaseName(path);

    if(!this->m_db.open())
    {
        qDebug() << "Error: connection with database fail";
    }else
    {
        qDebug() << "Database: connection ok";
    }
}


bool DbManager::addEmployee(const QString &name)
{
    bool success = false;
    //Creates a query object
    QSqlQuery query;

    //Prepares a query so it can be executed otherwise it will return false
    query.prepare("INSERT INTO employee (id, name)"
                  "VALUES (:id, :name)");
    //defines values
    query.bindValue(":id", 1);
    query.bindValue(":name", name);


    return true;
}

void DbManager::getEmployee()
{
    //Creats query
    QSqlQuery query("SELECT * FROM employee");

    //record info from the column name
    int indxName = query.record().indexOf("name");
    int i = 0;
    while(query.next())
    {
        QString name = query.value(indxName).toString(); // output
        qDebug() << name;
    }
}
