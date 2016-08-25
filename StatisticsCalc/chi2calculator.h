#ifndef CHI2CALCULATOR_H
#define CHI2CALCULATOR_H

#include <QObject>
#include "abstractcalculator.h"
#include "sample.h"


class Chi2Calculator: public AbstractCalculator
{
    Q_OBJECT
public:
    Chi2Calculator(AbstractDirectCalculator* _calc);
    double calculate(Sample sample);

private:
    int degreesOfFreedom;
    AbstractDirectCalculator* calc;
};


class Chi2DirectCalculator: public AbstractDirectCalculator
{
public:
    static double calculate(Sample);
};


#endif // CHI2CALCULATOR_H
