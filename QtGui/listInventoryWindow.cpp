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
