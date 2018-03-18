#include "menuManager.h"
#include "ui_menuManager.h"

menuManager::menuManager(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::menuManager)
{
    ui->setupUi(this);
}

menuManager::~menuManager()
{
    delete ui;
}

void menuManager::on_pushButton_clicked()
{
    LoginWindow* logintPtr = new LoginWindow(this);
    this->close();
    logintPtr->show();
}
