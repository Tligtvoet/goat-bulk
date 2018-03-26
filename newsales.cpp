#include "newsales.h"
#include "ui_newsales.h"
#include <QDate>


newSales::newSales(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::newSales)
{
    ui->setupUi(this);
    int tempId;
    QString tempName, tempStatus;
    QSqlQuery query;
    query.prepare("SELECT * FROM SalesInfo");
    query.exec();

    ui->tableWidget->setColumnCount(7);
    ui->tableWidget->setRowCount(query.size());
    ui->tableWidget->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
    ui->tableWidget->setHorizontalHeaderLabels(QString("Date;Id;Item;Cost;Quantity;Member;Member Status").split(";"));


    tempId = 0;

    int i=0;
    while (query.next()) {

        ui->tableWidget->insertRow(i);
        ui->tableWidget->setItem(i,0,new QTableWidgetItem(query.value(0).toString()));
        ui->tableWidget->setItem(i,1,new QTableWidgetItem(query.value(1).toString()));
        tempId = query.value(1).toInt();
        ui->tableWidget->setItem(i,2,new QTableWidgetItem(query.value(2).toString()));
        ui->tableWidget->setItem(i,3,new QTableWidgetItem(query.value(3).toString()));
        ui->tableWidget->setItem(i,4,new QTableWidgetItem(query.value(4).toString()));
        tempName = nameOfCustomer(tempId);
        tempStatus = memberStatus(tempId);
        ui->tableWidget->setItem(i,5,new QTableWidgetItem(tempName));
        ui->tableWidget->setItem(i,6,new QTableWidgetItem(tempStatus));

        i++;
    }



}

QString newSales::nameOfCustomer(int id){
    QSqlQuery query;
    query.prepare("SELECT * FROM Member");
    query.exec();
    QString returnName;

    query.first();
    query.setForwardOnly(true);
    if(id == query.value(1)){
        returnName = query.value(0).toString();
    }
    else{
        while(query.next()){
            if(id == query.value(1)){
                returnName = query.value(0).toString();
            }
        }
    }
    return returnName;


}
QString newSales::memberStatus(int id){
    QSqlQuery query;
    query.prepare("SELECT * FROM Member");
    query.exec();
    QString returnStatus;

    query.first();
    query.setForwardOnly(true);
    if(id == query.value(1)){
        returnStatus = query.value(2).toString();
    }
    else{
        while(query.next()){
            if(id == query.value(1)){
                returnStatus = query.value(2).toString();
            }
        }
    }
    return returnStatus;
}

newSales::~newSales()
{
    delete ui;
}


void newSales::on_pushButton_back_clicked()
{
    newMenu *menuPtr = new newMenu(this);
    this->close();
    menuPtr->show();
}


void newSales::on_pushButton_clicked()
{
    ui->tableWidget->clearContents();
    ui->tableWidget->setRowCount(0);

    int tempId;

    QDate date;
    QString tempName, tempStatus;
    QSqlQuery query;

    date = ui->dateEdit_chooseDate->date();

    query.prepare("SELECT * FROM SalesInfo WHERE date = :date");
    query.bindValue(":date", date.toString("MM/dd/yyyy"));
    query.exec();

    ui->tableWidget->setColumnCount(7);
    ui->tableWidget->setRowCount(query.size());
    ui->tableWidget->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
    ui->tableWidget->setHorizontalHeaderLabels(QString("Date;Id;Item;Cost;Quantity;Member;Member Status").split(";"));

    tempId = 0;

    int i=0;
    while (query.next()) {
        //date = QDate::fromString(query.value(0).toString(),"mm/dd/yyyy");

            ui->tableWidget->insertRow(i);
            ui->tableWidget->setItem(i,0,new QTableWidgetItem(query.value(0).toString()));
            ui->tableWidget->setItem(i,1,new QTableWidgetItem(query.value(1).toString()));
            tempId = query.value(1).toInt();
            ui->tableWidget->setItem(i,2,new QTableWidgetItem(query.value(2).toString()));
            ui->tableWidget->setItem(i,3,new QTableWidgetItem(query.value(3).toString()));
            ui->tableWidget->setItem(i,4,new QTableWidgetItem(query.value(4).toString()));
            tempName = nameOfCustomer(tempId);
            tempStatus = memberStatus(tempId);
            ui->tableWidget->setItem(i,5,new QTableWidgetItem(tempName));
            ui->tableWidget->setItem(i,6,new QTableWidgetItem(tempStatus));
    }

}
