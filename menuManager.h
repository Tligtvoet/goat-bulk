#ifndef MENUMANAGER_H
#define MENUMANAGER_H

#include "loginwindow.h"
#include "addMember.h"
#include "deleteMember.h"
#include "employeetable.h"
#include "listMembersWindow.h"

#include <QDialog>

namespace Ui {
class menuManager;
}

class menuManager : public QDialog
{
    Q_OBJECT

public:
    explicit menuManager(QWidget *parent = 0);
    ~menuManager();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_11_clicked();

    void on_pushButton_9_clicked();

private:
    Ui::menuManager *ui;
};

#endif // MENUMANAGER_H
