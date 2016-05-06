#ifndef CALCULATOR_H
#define CALCULATOR_H

#include<QObject>

class AbstractCalculator
{
public:
    static AbstractCalculator* createCalculator(int type, DirectCalculation*);
    virtual void calculate(Sample);
};

class Chi2Calculator: public AbstractCalculator
{
    Q_OBJECT
public:
    Calculator();
    double calculate(Sample sample);

 private:
    DirectCalculation* calc;
    // работа с кэшем здесь
};

// расчёт статистики "в лоб" (не по данным кеша)
class DirectCalculation
{
public:
    virtual double calculate(Sample);
};

class Chi2: public DirectCalculation
{
public:
    double calculate(Sample);
};


#endif // CALCULATOR_H
