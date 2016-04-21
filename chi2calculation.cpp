#include "chi2calculation.h"
#include "ui_chi2calculation.h"

Chi2Calculation::Chi2Calculation(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Chi2Calculation)
{
    ui->setupUi(this);
}

Chi2Calculation::~Chi2Calculation()
{
    delete ui;
}
