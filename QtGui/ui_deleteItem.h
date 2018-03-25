/********************************************************************************
** Form generated from reading UI file 'deleteItem.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETEITEM_H
#define UI_DELETEITEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_deleteItem
{
public:
    QLineEdit *lineEdit_id;
    QPushButton *pushButton_3;
    QTableWidget *tableWidget;
    QLabel *label_2;
    QPushButton *pushButton_back;
    QLabel *label_deletemember;
    QLabel *label_id;
    QPushButton *pushButton_logout;

    void setupUi(QDialog *deleteItem)
    {
        if (deleteItem->objectName().isEmpty())
            deleteItem->setObjectName(QStringLiteral("deleteItem"));
        deleteItem->resize(655, 552);
        lineEdit_id = new QLineEdit(deleteItem);
        lineEdit_id->setObjectName(QStringLiteral("lineEdit_id"));
        lineEdit_id->setGeometry(QRect(180, 70, 151, 21));
        pushButton_3 = new QPushButton(deleteItem);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(350, 71, 81, 21));
        tableWidget = new QTableWidget(deleteItem);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(0, 100, 641, 441));
        label_2 = new QLabel(deleteItem);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(180, 40, 141, 16));
        pushButton_back = new QPushButton(deleteItem);
        pushButton_back->setObjectName(QStringLiteral("pushButton_back"));
        pushButton_back->setGeometry(QRect(10, 10, 113, 32));
        label_deletemember = new QLabel(deleteItem);
        label_deletemember->setObjectName(QStringLiteral("label_deletemember"));
        label_deletemember->setGeometry(QRect(180, 10, 101, 16));
        label_id = new QLabel(deleteItem);
        label_id->setObjectName(QStringLiteral("label_id"));
        label_id->setGeometry(QRect(130, 70, 41, 16));
        pushButton_logout = new QPushButton(deleteItem);
        pushButton_logout->setObjectName(QStringLiteral("pushButton_logout"));
        pushButton_logout->setGeometry(QRect(530, 10, 113, 32));

        retranslateUi(deleteItem);

        QMetaObject::connectSlotsByName(deleteItem);
    } // setupUi

    void retranslateUi(QDialog *deleteItem)
    {
        deleteItem->setWindowTitle(QApplication::translate("deleteItem", "Dialog", nullptr));
        pushButton_3->setText(QApplication::translate("deleteItem", "Submit", nullptr));
        label_2->setText(QApplication::translate("deleteItem", "Delete By Item Number", nullptr));
        pushButton_back->setText(QApplication::translate("deleteItem", "Back", nullptr));
        label_deletemember->setText(QApplication::translate("deleteItem", "Delete Item", nullptr));
        label_id->setText(QApplication::translate("deleteItem", "Item ID: ", nullptr));
        pushButton_logout->setText(QApplication::translate("deleteItem", "Logout", nullptr));
    } // retranslateUi

};

namespace Ui {
    class deleteItem: public Ui_deleteItem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETEITEM_H
