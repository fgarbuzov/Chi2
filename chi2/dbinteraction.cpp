#include <dbinterañtion.h>
#include <QDebug>

DBInteraction::DBInteraction(QString host, QString dbname, QString user, QString password)
{
    addConnection(host, dbname, user, password);
}

DBInteraction::addConnection(QString host, QString dbname, QString user, QString password)
{
    db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName(host);
    db.setDatabaseName(dbname);
    db.setUserName(user);
    db.setPassword(password);

    if (!db.open())
    {
        qDebug() << db.lastError().text();
        return true;
    }
    else
    {
        qDebug() << "Connected";
        return false
    }
}
