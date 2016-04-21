#ifndef DBINTERATION_H
#define DBINTERATION_H

#include <QtSql>

typedef QVector< QPair<QString, int> > SamplesInfo; // name, size
typedef struct {
        double* array;
        size_t size;
} Sample;

class DBInteraction: public QWidget
{
    //Q_OBJECT
public:
    DBInteraction(QString host, QString dbname, QString user, QString password, int port);
    ~DBInteraction();

    /** Add connection between app and its data base
        returns true if connection has been set, fasle if not
    */
    bool addConnection();

    /** Get information about each sample in data base
    */
    SamplesInfo getSamplesInfo();

    /** Get sample from data base
      */
    Sample getSample(QString sampleName);

public slots:
    void closeConnection();

private:
    QSqlDatabase db;
};

#endif // DBINTERATION_H
