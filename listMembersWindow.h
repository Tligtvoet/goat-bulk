#ifndef LISTMEMBERSWINDOW_H
#define LISTMEMBERSWINDOW_H

#include <QDialog>
#include <loginwindow.h>
#include "members.h"
#include "memberManager.h"

namespace Ui {
class listMembersWindow;
}

class listMembersWindow : public QDialog
{
    Q_OBJECT

public:
    explicit listMembersWindow(QWidget *parent = 0);
    ~listMembersWindow();

private slots:
    void on_BackButton_clicked();

    void on_Logout_clicked();

    void on_allMembersButton_clicked();

private:
    Ui::listMembersWindow *ui;
};

#endif // LISTMEMBERSWINDOW_H
