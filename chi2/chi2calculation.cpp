#include "chi2calculation.h"
#include "ui_chi2calculation.h"

Chi2Calculation::Chi2Calculation(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Chi2Calculation)
{
    ui->setupUi(this);

    db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("127.0.0.1");
    db.setDatabaseName("chi2db");
    db.setUserName("root");
    db.setPassword("best291");

    if (!db.open())
    {
        qDebug() << db.lastError().text();
    }
    else
        qDebug() << "Connected";
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
