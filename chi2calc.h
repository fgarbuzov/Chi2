#ifndef CHI2CALC_H
#define CHI2CALC_H

#include<QObject>

typedef QVector< QPair<double, double> > CachedPoints; // chi2, value

class Chi2: public QObject
{
    Q_OBJECT
public:
    Chi2(QWidget *parent);
    ~Chi2();

    /** Get already calculated chi2 statistics
        for samples with the same degrees of freedom
    */
    CachedPoints getCachedPoints(size_t degreesOfFreedom);

    /** Draw plot in the plot-window
    */
    double calculateChi2(Sample sample);

    /** Delete plot from the plot-window
    */
    void clearGraphic();

public slots:
    /** Solve the task
    */
    void solve();

    /** Provides adding parameters in ui
    */
    void addParameters();

    /** Read equation from ui and verify it
    */
    void submitEquation();

    /** Read method from ui
    */
    void submitMethod();

    /** Read parameters from ui and verify them
    */
    void submitParameters();

    /** Provides adding solved task in app's data base
    */
    void addInHistory();

    /** Provides saving plot in file
    */
    void savePlot();

};


#endif // CHI2CALC_H
