/********************************************************************************
** Form generated from reading UI file 'editemployee.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITEMPLOYEE_H
#define UI_EDITEMPLOYEE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_editEmployee
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QTableView *tableView;

    void setupUi(QDialog *editEmployee)
    {
        if (editEmployee->objectName().isEmpty())
            editEmployee->setObjectName(QStringLiteral("editEmployee"));
        editEmployee->resize(600, 700);
        editEmployee->setMinimumSize(QSize(600, 700));
        editEmployee->setMaximumSize(QSize(600, 700));
        pushButton = new QPushButton(editEmployee);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(10, 10, 113, 32));
        pushButton_2 = new QPushButton(editEmployee);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(510, 10, 113, 32));
        pushButton_3 = new QPushButton(editEmployee);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(20, 490, 113, 32));
        tableView = new QTableView(editEmployee);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(10, 50, 581, 641));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tableView->sizePolicy().hasHeightForWidth());
        tableView->setSizePolicy(sizePolicy);

        retranslateUi(editEmployee);

        QMetaObject::connectSlotsByName(editEmployee);
    } // setupUi

    void retranslateUi(QDialog *editEmployee)
    {
        editEmployee->setWindowTitle(QApplication::translate("editEmployee", "Dialog", nullptr));
        pushButton->setText(QApplication::translate("editEmployee", "Back", nullptr));
        pushButton_2->setText(QApplication::translate("editEmployee", "Logout", nullptr));
        pushButton_3->setText(QApplication::translate("editEmployee", "Submit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class editEmployee: public Ui_editEmployee {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITEMPLOYEE_H
