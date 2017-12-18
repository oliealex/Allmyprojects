#include "mainwindow.h"
#include <QApplication>
#include <QDebug>
#include "dbmanager.h"

static const QString path = "employee.db";

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    DbManager db("employee.db");
    QString test = "TESTER";
    db.addEmployee(test);
    db.getEmployee();


    return a.exec();
}
