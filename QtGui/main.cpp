#include "loginwindow.h"
#include "employeetable.h"
#include "dbmanager.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    LoginWindow login;

    EmployeeTable table(LOGIN_TABLE);
    table.show();
    //login.show();

    return a.exec();
}
