#include "newmenu.h"
#include "ui_newmenu.h"
#include "addMember.h"
#include "deleteemployee.h"

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
    addMember* addMemberPtr = new addMember(this);
    this->close();
    addMemberPtr->show();
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
