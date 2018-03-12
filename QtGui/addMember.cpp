#include "addMember.h"
#include "ui_addmember.h"

/*THIS SHOULD BE addEmployee.cpp */

addMember::addMember(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addMember)
{
    ui->setupUi(this);
}

addMember::~addMember()
{
    delete ui;
}

void addMember::on_button_submit_clicked()
{
    QString userName = ui->lineEdit_username->text();
    QString passWord = ui->lineEdit_password->text();
    bool adminStat;
    bool n;

    if(ui->adminyes->isChecked())
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

    ui->lineEdit_username->clear();
    ui->lineEdit_password->clear();
    ui->adminyes->setChecked(false);
    ui->adminno->setChecked(false);
}

void addMember::on_back_button_clicked()
{
    newMenu* newMenuPtr = new newMenu(this);
    this->close();
    newMenuPtr->show();
}

void addMember::on_logout_button_clicked()
{
    LoginWindow* logintPtr = new LoginWindow(this);
    this->close();
    logintPtr->show();
}
