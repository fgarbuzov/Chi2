#ifndef ABSTRACTCALCULATOR_H
#define ABSTRACTCALCULATOR_H

#include "sample.h"

class AbstractCalculator
{
public:
    static AbstractCalculator* createCalculator(int type, AbstractDirectCalculator*);
    virtual void calculate(Sample);
};

class AbstractDirectCalculator
{
public:
    virtual static double calculate(Sample);
};

#endif // ABSTRACTCALCULATOR_H
