#include "listInventoryWindow.h"
#include "ui_listInventoryWindow.h"

listInventoryWindow::listInventoryWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::listInventoryWindow)
{
    ui->setupUi(this);
    ui->tableWidget->clearContents();
    ui->tableWidget->setRowCount(0);

    double revenue = 0.00;

    QSqlQuery query;
    query.prepare("SELECT item, quantity FROM SalesInfo ORDER BY item");
    query.exec();

    ui->tableWidget->setColumnCount(3);
    ui->tableWidget->setRowCount(query.size());
    ui->tableWidget->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    ui->tableWidget->setHorizontalHeaderLabels(QString("Item;Quantity;Revenue").split(";"));

    int i = 0;
    while(query.next()) {
        ui->tableWidget->insertRow(i);
        ui->tableWidget->setItem(i, 0, new QTableWidgetItem(query.value(0).toString()));
    }
}

listInventoryWindow::~listInventoryWindow()
{
    delete ui;
}

void listInventoryWindow::on_pushButton_back_clicked()
{
    menuManager* menuPtr = new menuManager(this);
    this->close();
    menuPtr->show();
}

void listInventoryWindow::on_pushButton_logout_clicked()
{
    LoginWindow* logintPtr = new LoginWindow(this);
    this->close();
    logintPtr->show();
}
