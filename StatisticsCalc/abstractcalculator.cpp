#include "abstractcalculator.h"
#include "chi2calculator.h"

AbstractCalculator* AbstractCalculator::createCalculator(int type, AbstractDirectCalculator* calc)
{
    if (type == 1)
        return Chi2Calculator(calc);
    return NULL;
}
