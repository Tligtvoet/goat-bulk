#ifndef LISTINVENTORYWINDOW_H
#define LISTINVENTORYWINDOW_H

#include <QDialog>

namespace Ui {
class listInventoryWindow;
}

class listInventoryWindow : public QDialog
{
    Q_OBJECT

public:
    explicit listInventoryWindow(QWidget *parent = 0);
    ~listInventoryWindow();

private:
    Ui::listInventoryWindow *ui;
};

#endif // LISTINVENTORYWINDOW_H
