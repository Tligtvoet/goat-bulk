#include "loginmanager.h"
#include "ui_loginwindow.h"

// Constructor & Dectructor
LoginManager::LoginManager() {}
LoginManager::~LoginManager() {}

// methods
LoginManager& LoginManager::instance()
{
    // create instance by lazy initialization
    // guaranteed to be destroyed
    static LoginManager instance;

    return instance;
}

bool LoginManager::createUserAccount(const User& user) const
{
    if( user.getUsername().isEmpty() || user.getPassword().isEmpty() )
    {
        qDebug() << "Cannot create a User if username or password is not provided";
        return false;
    }

    //will not be modifying internal state of AuthManager so const. Parameter also const since user cannot be modified.
    QSqlQuery insertQuery;
    insertQuery.prepare("INSERT INTO LoginInfo (UserID, Username, Password, isAdministrator) VALUES (:userId, :username, :password, :isAdmin)");
    insertQuery.bindValue("userId", user.getId());
    insertQuery.bindValue(":username", user.getUsername());
    insertQuery.bindValue(":password", user.getPassword());
    insertQuery.bindValue(":isAdmin", user.isAdministrator() ? 1 : 0);

    if( insertQuery.exec() )
    {
        qDebug() << "User account creation succeeded!";
        return true;
    }
    else
    {
        qDebug() << "User account creation failed: " << insertQuery.lastError();
        return false;
    }
}

bool LoginManager::deleteUserAccount(int userId) const
{
    QSqlQuery query;
    query.prepare("DELETE FROM LoginInfo WHERE Id = :UserID");
    query.bindValue(":UserID", userId);

    if( query.exec() )
    {
        qDebug() << "User account deleted!";
        return true;
    }
    else
    {
        qDebug() << "Delete user failed: " << query.lastError();
        return false;
    }
}

bool LoginManager::updateUserAccount(const User& user) const
{

}

User LoginManager::authenticate(const QString& username, const QString& password) const
{
    LoginManager::instance();
    QSqlQuery query;

    query.prepare("SELECT UserID, Username, Password, isAdministrator FROM LoginInfo WHERE username = (:Username)");
    query.bindValue(":Username", username);

    if (query.exec())
        {
            int idId = query.record().indexOf("Id");
            int idUsername = query.record().indexOf("Username");
            int idPassword = query.record().indexOf("Password");
            int idisAdministrator = query.record().indexOf("isAdministrator");

            if (query.next())
            {
                QString dbusername = query.value(idUsername).toString();
                QString dbpassword = query.value(idPassword).toString();
                bool dbisAdministrator = query.value(idisAdministrator).toInt() == 1;
                int dbid = query.value(idId).toInt();

                if( dbpassword == password )
                {
                    return User(dbid, dbusername, dbpassword, dbisAdministrator);
                }
            }
        }
        else
        {
            qDebug() << "Error authenticating: " << query.lastError();
        }

    return NULL_USER;
}

/*** U I ***/
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
    QSqlDatabase myDB  = QSqlDatabase::addDatabase("QSQLITE");
    myDB.setDatabaseName("bulk.db");
    myDB.open();
}

LoginWindow::~LoginWindow()
{
    delete ui;
}
