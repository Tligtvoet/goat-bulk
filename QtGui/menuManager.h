#ifndef MENUMANAGER_H
#define MENUMANAGER_H

#include <loginwindow.h>

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

private:
    Ui::menuManager *ui;
};

#endif // MENUMANAGER_H
