#include "newmenu.h"
#include "ui_newmenu.h"
#include "addemployee.h"
#include "deleteemployee.h"
#include "editemployee.h"

newMenu::newMenu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::newMenu)
{
    ui->setupUi(this);
}

newMenu::~newMenu()
{
    delete ui;
}

void newMenu::on_pushButton_2_clicked()
{
    addEmployee* addEmployeePtr = new addEmployee(this);
    this->close();
    addEmployeePtr->show();
}

void newMenu::on_pushButton_clicked()
{
    LoginWindow* logintPtr = new LoginWindow(this);
    this->close();
    logintPtr->show();
}

void newMenu::on_pushButton_3_clicked()
{
    deleteEmployee* deleteEmployeePtr = new deleteEmployee(this);
    this->close();
    deleteEmployeePtr->show();
}

void newMenu::on_pushButton_4_clicked()
{
    EmployeeTable *table = new EmployeeTable(LOGIN_TABLE);
    this->close();
    table->show();
}
