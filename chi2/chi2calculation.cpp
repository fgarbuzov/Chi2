#include "chi2calculation.h"
#include "ui_chi2calculation.h"

Chi2Calculation::Chi2Calculation(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Chi2Calculation)
{
    ui->setupUi(this);
    db = new DBInteraction("localhist", "chi2", "root", "1234");
}

Chi2Calculation::~Chi2Calculation()
{
    delete ui;
}

void Chi2Calculation::on_comboBox_activated(int index)
{
    QString str = ui->comboBox->itemText(index);
    ui->label->setText(str);
}
