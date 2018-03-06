#include "employeemanager.h"
#include "ui_employeemanager.h"

EmployeeManager::EmployeeManager(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::EmployeeManager)
{
    ui->setupUi(this);
    ui->label_IdNum->setVisible(true);
    ui->lineEdit_IdNum->setVisible(true);
    ui->label_Username->setVisible(true);
    ui->lineEdit_Username->setVisible(true);
    ui->label_Password->setVisible(true);
    ui->lineEdit_Password->setVisible(true);
    ui->label_AdministrationStatus->setVisible(true);
    ui->checkBox_Yes->setVisible(true);
    ui->checkBox_No->setVisible(true);
}

EmployeeManager::~EmployeeManager()
{
    delete ui;
}

void EmployeeManager::on_pushButton_Add_clicked()
{
    QString userName = ui->lineEdit_Username->text();
    QString passWord = ui->lineEdit_Password->text();
    bool adminStat;
    bool n;

    if(ui->checkBox_Yes->isChecked())
    {
        adminStat = true;
    } else {
        adminStat = false;
    }

    n = LoginManager::instance().createUserAccount(User::User(userName, passWord, adminStat));

    if (n == true)
    {
        QMessageBox::information(this,QObject::tr("System Message"),tr("User account has been created!"),QMessageBox::Ok);
    }
    else
    {
        QMessageBox::information(this,QObject::tr("System Message"),tr("Creation of user account has failed!"),QMessageBox::Ok);
    }

    ui->lineEdit_IdNum->clear();
    ui->lineEdit_Username->clear();
    ui->lineEdit_Password->clear();
    ui->checkBox_Yes->setChecked(false);
    ui->checkBox_No->setChecked(false);
}

void EmployeeManager::on_pushButton_Delete_clicked()
{
    QString userID = ui->lineEdit_IdNum->text();
    int userId;
    userId = userID.toInt();  // convert Qstring to int

    ui->lineEdit_IdNum->clear();
    ui->lineEdit_Username->clear();
    ui->lineEdit_Password->clear();
    ui->checkBox_Yes->setChecked(false);
    ui->checkBox_No->setChecked(false);

    LoginManager::instance().deleteUserAccount(userId);

    if ( LoginManager::instance().deleteUserAccount(userId) == true)
    {
        QMessageBox::information(this,QObject::tr("System Message"),tr("User account has been deleted!"),QMessageBox::Ok);
    }
    else
    {
        QMessageBox::information(this,QObject::tr("System Message"),tr("User account has failed!"),QMessageBox::Ok);
    }
}

void EmployeeManager::on_pushButton_Edit_clicked()
{
    QString userID = ui->lineEdit_IdNum->text();
    int     userId;
    userId = userID.toInt();
    QString userName;
    QString passWord;
    bool adminStat;
    bool n;

    /* EDIT EVERYTHING OR IT WILL CHANGE EVEN THE EMPY ONES*/

    if(!ui->lineEdit_Username->text().isEmpty())
    {
        userName = ui->lineEdit_Username->text();
    }

    if(!ui->lineEdit_Password->text().isEmpty())
    {
        passWord = ui->lineEdit_Password->text();
    }
        if(ui->checkBox_Yes->isChecked())
        {
            adminStat = true;
        } else {
            adminStat = false;
        }

    n = LoginManager::instance().updateUserAccount(User::User(userId, userName, passWord, adminStat));

    if (n == true)
    {
        QMessageBox::information(this,QObject::tr("System Message"),tr("User account has been edited!"),QMessageBox::Ok);
    }
    else
    {
        QMessageBox::information(this,QObject::tr("System Message"),tr("Creation of user account has failed on editing!"),QMessageBox::Ok);
    }

    ui->lineEdit_IdNum->clear();
    ui->lineEdit_Username->clear();
    ui->lineEdit_Password->clear();
    ui->checkBox_Yes->setChecked(false);
    ui->checkBox_No->setChecked(false);
}
