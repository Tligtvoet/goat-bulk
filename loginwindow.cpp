#include "loginwindow.h"
#include "ui_loginwindow.h"

void LoginWindow::on_pushButton_login_clicked()
{
    QMessageBox invalidCreds;
    invalidCreds.setText("The username or password entered is incorrect");
    QString username = ui->lineEdit_username->text();
    QString password = ui->lineEdit_password->text();

    if(LoginManager::instance().authenticate(username, password) != NULL_USER)
    {
        Menu* menuptr = new Menu(this);
        this->close();
        menuptr->show();
    } else {
        invalidCreds.exec();
    }
}
LoginWindow::LoginWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::LoginWindow)
{
    ui->setupUi(this);
    QSqlDatabase myDB;

    if(QSqlDatabase::contains()) {
        myDB = QSqlDatabase::database(QLatin1String(QSqlDatabase::defaultConnection), false);
    }
    else {
        myDB = QSqlDatabase::addDatabase("QSQLITE");
    }
    myDB.setDatabaseName("bulk.db");
    myDB.open();
}

LoginWindow::~LoginWindow()
{
    delete ui;
}
