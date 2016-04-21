#ifndef CHI2CALCULATION_H
#define CHI2CALCULATION_H

#include <QWidget>

namespace Ui {
    class Chi2Calculation;
}

class Chi2Calculation : public QWidget
{
    Q_OBJECT

public:
    explicit Chi2Calculation(QWidget *parent = 0);
    ~Chi2Calculation();

private:
    Ui::Chi2Calculation *ui;
};

#endif // CHI2CALCULATION_H
