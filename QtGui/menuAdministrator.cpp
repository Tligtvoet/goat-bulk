#include "menuAdministrator.h"
#include "ui_menuAdministrator.h"

menuAdministrator::menuAdministrator(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::menuAdministrator)
{
    ui->setupUi(this);
}

menuAdministrator::~menuAdministrator()
{
    delete ui;
}

void menuAdministrator::on_pushButton_2_clicked()
{
    addEmployee* addEmployeePtr = new addEmployee(this);
    this->close();
    addEmployeePtr->show();
}

void menuAdministrator::on_pushButton_clicked()
{
    LoginWindow* logintPtr = new LoginWindow(this);
    this->close();
    logintPtr->show();
}

void menuAdministrator::on_pushButton_3_clicked()
{
    deleteEmployee* deleteEmployeePtr = new deleteEmployee(this);
    this->close();
    deleteEmployeePtr->show();
}

void menuAdministrator::on_pushButton_4_clicked()
{
    EmployeeTable *table = new EmployeeTable(LOGIN_TABLE);
    this->close();
    table->show();
}
