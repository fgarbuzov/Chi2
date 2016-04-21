#include <QtGui/QApplication>
#include "chi2calculation.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    Chi2Calculation w;
    w.show();

    return app.exec();
}
