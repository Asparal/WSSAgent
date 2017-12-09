#include <QCoreApplication>
#include "mainobject.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    mainobject* m = new mainobject();

    return a.exec();
}
