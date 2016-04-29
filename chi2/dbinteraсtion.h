#ifndef DBINTERATION_H
#define DBINTERATION_H

#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlDriver>
#include <QtSql/QSqlError>
#include <QPair>
#include <QWidget>

typedef QVector< QPair<QString, int> > SamplesInfo; // name, size
typedef struct {
        double* array;
        size_t size;
} Sample;

typedef QPair<double, double> Point; // chi2, value
typedef QVector<Point> PointVector;

class DBInteraction: public QWidget
{
    Q_OBJECT
public:
    DBInteraction(QString host, QString dbname, QString user, QString password);
    ~DBInteraction();

    /** Add connection between app and its data base
        returns true if connection has been set, fasle if not
    */
    bool addConnection(QString host, QString dbname, QString user, QString password);

    /** Get information about each sample in data base
    */
    SamplesInfo getSamplesInfo();

    /** Get sample from data base
      */
    Sample getSample(QString sampleName);

    /** Get already calculated chi2 statistics
        for samples with the same degrees of freedom
    */
    PointVector getCachedPoints(size_t degreesOfFreedom);

    /** Cache calculated point (save it in database)
      */
    void cachePoint(Point);

    /** Close current connection
      */
    void closeConnection();

private:
    QSqlDatabase db;
};

#endif // DBINTERATION_H
