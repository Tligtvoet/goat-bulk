#ifndef LOGINWINDOW_H
#define LOGINWINDOW_H

#include "user.h"
#include "menu.h"
#include "dbmanager.h"
#include <QMainWindow>
#include <QMessageBox>
#include <QSqlDatabase>

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
};

#endif // LOGINWINDOW_H
