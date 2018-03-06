#ifndef LOGINMANAGER_H
#define LOGINMANAGER_H

#include "user.h"
#include "menu.h"
#include "dbmanager.h"
#include <QMessageBox>
#include <QSqlQuery>
#include <QSqlError>
#include <QSqlRecord>
#include <QVariant> //need for bindValue call.
#include <QDebug>

using namespace std;

class LoginManager
{
public:
    static LoginManager& instance();

    LoginManager(LoginManager const&) = delete;     // Don't forget to disable copy
    void operator=(LoginManager const&) = delete;   // Don't forget to disable copy

    bool createUserAccount(const User& user) const; //will not be modifying internal state of AuthManager so const. Parameter also const since user cannot be modified.

    bool deleteUserAccount(int userId) const;
    bool updateUserAccount(const User& user) const;
    User authenticate(const QString& username, const QString& password) const;
private:
      LoginManager();  //forbid creation outside class
      ~LoginManager(); // forbid to delete instance outside
};

/*namespace Ui {
class LoginWindow;
}

class LoginWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit LoginWindow(QWidget *parent = 0);
    ~LoginWindow();

private slots:
    void on_pushButton_login_clicked();

private:
    Ui::LoginWindow *ui;
};*/
/*#include "menu.h"
#include <iostream>
#include <iomanip>
#include <fstream>
#include <QMainWindow>
#include <QWidget>
#include <QTextStream>
#include <QFile>
#include <QMessageBox>

#include <QtSql>
#include <QtDebug>
#include <QFileInfo>

#include <QSqlQuery>
#include <QSqlError>
#include <QSqlRecord>
#include <QVariant> //need for bindValue call.
#include <QDebug>

using namespace std;

namespace Ui {
class LoginWindow;
}

class LoginWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit LoginWindow(QWidget *parent = 0);
    ~LoginWindow();

private slots:
    void on_pushButton_login_clicked();

private:
    Ui::LoginWindow *ui;
};*/

#endif // LOGINMANAGER_H
