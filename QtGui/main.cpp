#include "loginwindow.h"
#include "newtable.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    LoginWindow login;
    //newTable kk;
    //kk.show();
    login.show();

    return a.exec();
}
