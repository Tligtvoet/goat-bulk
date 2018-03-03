#include "employeemanager.h"
#include "ui_employeemanager.h"

EmployeeManager::EmployeeManager(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::EmployeeManager)
{
    ui->setupUi(this);
    ui->label_IdNum->setVisible(false);
    ui->lineEdit_IdNum->setVisible(false);
    ui->label_Username->setVisible(false);
    ui->lineEdit_Username->setVisible(false);
    ui->label_Password->setVisible(false);
    ui->lineEdit_Password->setVisible(false);
    ui->label_AdministrationStatus->setVisible(false);
    ui->checkBox_Yes->setVisible(false);
    ui->checkBox_No->setVisible(false);
    ui->pushButton_SaveChanges->setVisible(false);
}

EmployeeManager::~EmployeeManager()
{
    delete ui;
}

void EmployeeManager::on_pushButton_Add_clicked()
{
    ui->label_Username->setVisible(true);
    ui->lineEdit_Username->setVisible(true);
    ui->label_Password->setVisible(true);
    ui->lineEdit_Password->setVisible(true);
    ui->label_AdministrationStatus->setVisible(true);
    ui->checkBox_Yes->setVisible(true);
    ui->checkBox_No->setVisible(true);
    ui->pushButton_SaveChanges->setVisible(true);
}


void EmployeeManager::on_pushButton_SaveChanges_clicked()
{
    QString userName = ui->lineEdit_Username->text();
    QString passWord = ui->lineEdit_Password->text();
    bool adminStat;

    if(ui->checkBox_Yes->isChecked())
    {
        adminStat = true;
    } else {
        adminStat = false;
    }

    LoginManager::instance().createUserAccount(User::User(userName, passWord, adminStat));
}
