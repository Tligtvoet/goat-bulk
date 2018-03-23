#ifndef ADDMEMBER_H
#define ADDMEMBER_H

#include <loginwindow.h>
#include "members.h"
#include "memberManager.h"
#include <QDialog>

namespace Ui {
class addMember;
}

class addMember : public QDialog
{
    Q_OBJECT

public:
    explicit addMember(QWidget *parent = 0);
    ~addMember();

private slots:
    void on_pushButton_back_clicked();

    void on_pushButton_logout_clicked();

    void on_pushButton_submit_clicked();

private:
    Ui::addMember *ui;
};

#endif // ADDMEMBER_H
