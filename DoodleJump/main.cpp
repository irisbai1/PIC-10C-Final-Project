#include "doodlejump.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    DoodleJump w;
    w.show();
    return a.exec();
}
