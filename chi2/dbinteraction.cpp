#include <dbinterañtion.h>
#include <QDebug>

DBInteraction::DBInteraction(QString host, QString dbname, QString user, QString password)
{
    db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName(host);
    db.setDatabaseName(dbname);
    db.setUserName(user);
    db.setPassword(password);

    if (!db.open())
        qDebug() << db.lastError().text();
    else
        qDebug() << "Connected";
}

