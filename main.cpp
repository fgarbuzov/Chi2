#include <QtGui/QApplication>
#include "chi2calculation.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Chi2Calculation w;
    w.show();

    return a.exec();
}
