#ifndef CHI2CALCULATION_H
#define CHI2CALCULATION_H

#include <QWidget>
#include <QDebug>
#include <dbinterañtion.h>

namespace Ui {
    class Chi2Calculation;
}

class Chi2Calculation : public QWidget
{
    Q_OBJECT

public:
    explicit Chi2Calculation(QWidget *parent = 0);
    ~Chi2Calculation();

private slots:
    void on_comboBox_activated(int index);

private:
    Ui::Chi2Calculation *ui;
    DBInteraction *db;
};

#endif // CHI2CALCULATION_H
