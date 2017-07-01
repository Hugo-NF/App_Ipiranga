#include "loginuser.h"
#include <QApplication>
#include <QLayout>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    LoginUser w;

    //open the app
    w.show();
    w.setFixedSize(400,310);

    return a.exec();
}
