#include "abstractcalculator.h"
#include "chi2calculator.h"

Chi2Calculator::Chi2Calculator(AbstractDirectCalculator* _calc)
{
    this->calc = _calc;
}
