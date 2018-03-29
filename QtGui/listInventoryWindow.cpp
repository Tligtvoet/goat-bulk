#include "listInventoryWindow.h"
#include "ui_listInventoryWindow.h"

listInventoryWindow::listInventoryWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::listInventoryWindow)
{
    ui->setupUi(this);
}

listInventoryWindow::~listInventoryWindow()
{
    delete ui;
}

void listInventoryWindow::on_pushButton_2_clicked()
{
    menuAdministrator *menuPtr = new menuAdministrator(this);
    this->close();
    menuPtr->show();
}

void listInventoryWindow::on_pushButton_clicked()
{
    LoginWindow* logintPtr = new LoginWindow(this);
    this->close();
    logintPtr->show();
}
