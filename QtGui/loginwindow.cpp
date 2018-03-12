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
        newMenu* newMenuPtr = new newMenu(this);
        this->close();
        newMenuPtr->show();
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

<<<<<<< HEAD
    if(QSqlDatabase::contains())
    {
        myDB = QSqlDatabase::database(QLatin1String(QSqlDatabase::defaultConnection), false);
    } else {
=======
    if(QSqlDatabase::contains()) {
        myDB = QSqlDatabase::database(QLatin1String(QSqlDatabase::defaultConnection), false);
    }
    else {
>>>>>>> 086451568f83b1c9862a214df4333cbd1b8f99dc
        myDB = QSqlDatabase::addDatabase("QSQLITE");
    }
    myDB.setDatabaseName("bulk.db");
    myDB.open();
}

LoginWindow::~LoginWindow()
{
    delete ui;
}
