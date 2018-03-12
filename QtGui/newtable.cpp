#include "newtable.h"
#include "ui_newtable.h"

newTable::newTable(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::newTable)
{
    ui->setupUi(this);

    LoginManager::instance();
    QSqlQuery query;

    query.prepare("SELECT * FROM LoginInfo");
    if(query.exec())
    {
        do{
            EmployeeList.push_back(query.record());
          }while(query.next());
    }

    for(unsigned int i = 0; i < EmployeeList.size()-1; ++i)
    {
        ui->tableWidget->insertRow(ui->tableWidget->rowCount());
        qDebug() << EmployeeList.at(i);
    }
}

newTable::~newTable()
{
    delete ui;
}
