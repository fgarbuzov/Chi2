#ifndef CHI2CALC_H
#define CHI2CALC_H

#include<QObject>

class AbstractCalculator
{
public:
    static Calculator* createCalculator(int type, DirectCalculation*);
    virtual void calculate(Sample);
};

class Calculator: public AbstractCalculator
{
    Q_OBJECT
public:
    Calculator();
    ~Calculator();

    double calculate(Sample sample);

 private:
    // работа с кэшем

    DirectCalculation* calc;

};

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


#endif // CHI2CALC_H
