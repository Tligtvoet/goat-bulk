#include "listMembersWindow.h"
#include "ui_listMembersWindow.h"

listMembersWindow::listMembersWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::listMembersWindow)
{
    ui->setupUi(this);
}

listMembersWindow::~listMembersWindow()
{
    delete ui;
}

void listMembersWindow::on_BackButton_clicked()
{
    menuAdministrator* newMenuPtr = new menuAdministrator(this);
    this->close();
    newMenuPtr->show();
}

void listMembersWindow::on_Logout_clicked()
{
    LoginWindow* loginPtr = new LoginWindow(this);
    this->close();
    loginPtr->show();
}

void listMembersWindow::on_allMembersButton_clicked()
{
    ui->tableWidget->clearContents();
    ui->tableWidget->setRowCount(0);

    QSqlQuery query;
    query.prepare("SELECT MemberID AS MemberID, MemberName AS MemberName, MemberStatus AS MemberStatus, MemberExpire AS MemberExpire FROM Member");
    query.exec();

    ui->tableWidget->setColumnCount(4);
    ui->tableWidget->setRowCount(query.size());
    ui->tableWidget->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
    ui->tableWidget->setHorizontalHeaderLabels(QString("Member ID;Member Name;Member Status; Expiration Date").split(";"));

    int i=0;
    while(query.next()) {
        ui->tableWidget->insertRow(i);
        ui->tableWidget->setItem(i,0,new QTableWidgetItem(query.value(0).toString()));
        ui->tableWidget->setItem(i,1,new QTableWidgetItem(query.value(1).toString()));
        ui->tableWidget->setItem(i,2,new QTableWidgetItem(query.value(2).toString()));
        ui->tableWidget->setItem(i,3,new QTableWidgetItem(query.value(3).toString()));
        i++;
    }

}
