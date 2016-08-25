#ifndef DBINTERATION_H
#define DBINTERATION_H

#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlDriver>
#include <QtSql/QSqlError>

class DBInteraction: public QObject
{
    Q_OBJECT
public:
    DBInteraction(QString host, QString dbname, QString user, QString password);
    ~DBInteraction();

    /** Add connection between app and its database
        returns true if connection has been set or is already set, fasle if not
    */
    bool addConnection(QString host, QString dbname, QString user, QString password);

    /** Close current connection
      */
    void closeConnection();

private:
    QSqlDatabase db;
};

#endif // DBINTERATION_H
