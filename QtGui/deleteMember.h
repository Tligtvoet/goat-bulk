#ifndef DELETEMEMBER_H
#define DELETEMEMBER_H

#include <QDialog>
#include <loginwindow.h>
#include "members.h"
#include "memberManager.h"

namespace Ui {
class deleteMember;
}

class deleteMember : public QDialog
{
    Q_OBJECT

public:
    explicit deleteMember(QWidget *parent = 0);
    ~deleteMember();

private slots:
    void on_pushButton_back_clicked();

    void on_pushButton_logout_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::deleteMember *ui;
};

#endif // DELETEMEMBER_H
