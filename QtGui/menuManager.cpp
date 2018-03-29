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

void menuManager::on_pushButton_7_clicked()
{
    addMember* addMemberPtr = new addMember(this);
    this->close();
    addMemberPtr->show();
}

void menuManager::on_pushButton_8_clicked()
{
    deleteMember* deleteMemberPtr = new deleteMember(this);
    this->close();
    deleteMemberPtr->show();
}

void menuManager::on_pushButton_11_clicked()
{
    MemberTable *table = new MemberTable(MEMBER_TABLE);
    this->close();
    table->show();
}

void menuManager::on_pushButton_9_clicked()
{
    listMembersWindow* window = new listMembersWindow(this);
    this->close();
    window->show();
}

void menuManager::on_pushButton_5_clicked()
{
    addItem* window = new addItem(this);
     this->close();
     window->show();
}

void menuManager::on_pushButton_6_clicked()
{
    deleteItem* window = new deleteItem(this);
    this->close();
    window->show();
}

void menuManager::on_pushButton_10_clicked()
{
    inventoryTable *table = new inventoryTable(INVENTORY_TABLE);
    this->close();
    table->show();
}
