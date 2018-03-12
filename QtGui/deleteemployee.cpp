#include "deleteemployee.h"
#include "ui_deleteemployee.h"
#include "dbmanager.h"

deleteEmployee::deleteEmployee(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::deleteEmployee)
{
    ui->setupUi(this);

    QSqlQuery query;
    query.prepare("SELECT * FROM LoginInfo");
    query.exec();
    ui->tableWidget->setColumnCount(4);
    ui->tableWidget->setRowCount(query.size());
    ui->tableWidget->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
    ui->tableWidget->setHorizontalHeaderLabels(QString("ID;Username;Password; Administrator Status").split(";"));

    int i=0;
    while (query.next()) {
    ui->tableWidget->setItem(i,0,new QTableWidgetItem(query.value(0).toString()));
    ui->tableWidget->setItem(i,1,new QTableWidgetItem(query.value(1).toString()));
    ui->tableWidget->setItem(i,2,new QTableWidgetItem(query.value(2).toString()));
    ui->tableWidget->setItem(i,4,new QTableWidgetItem(query.value(2).toString()));
    i++;
    ui->tableWidget->insertRow(i);
    }

//    LoginManager::instance();
//    QSqlQueryModel * modal = new QSqlQueryModel();
//    QSqlQuery *qry = new QSqlQuery();
//    qry->prepare("select * from LoginInfo");
//    qry->exec();
//    modal->setQuery(*qry);
//    ui->tableWidget->setModel(modal);
}

deleteEmployee::~deleteEmployee()
{
    delete ui;
}

void deleteEmployee::on_pushButton_clicked()
{
    newMenu* newMenuPtr = new newMenu(this);
    this->close();
    newMenuPtr->show();
}


void deleteEmployee::on_pushButton_2_clicked()
{
    LoginWindow* logintPtr = new LoginWindow(this);
    this->close();
    logintPtr->show();
}

void deleteEmployee::on_pushButton_3_clicked()
{
    QString userID = ui->lineEdit_id->text();
    int userId;
    userId = userID.toInt();  // convert Qstring to int

    ui->lineEdit_id->clear();

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
