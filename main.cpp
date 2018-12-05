#include "kaishi.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    kaishi *w=new kaishi();
    w->show();
    return a.exec();
}
