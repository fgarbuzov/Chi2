#ifndef DBINTERATION_H
#define DBINTERATION_H

#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlDriver>
#include <QtSql/QSqlError>
#include <QPair>
#include <QWidget>

/*typedef QVector< QPair<QString, int> > SamplesInfo; // name, size
typedef struct {
        double* array;
        size_t size;
} Sample;

typedef QPair<double, double> Point; // chi2, value
typedef QVector<Point> PointVector;*/

class DBInteraction: public QObject
{
    Q_OBJECT
public:
    DBInteraction(QString host, QString dbname, QString user, QString password);
    ~DBInteraction();

    /** Add connection between app and its data base
        returns true if connection has been set, fasle if not
    */
    bool addConnection(QString host, QString dbname, QString user, QString password);

    /** Close current connection
      */
    void closeConnection();

private:
    QSqlDatabase db;
};

#endif // DBINTERATION_H
