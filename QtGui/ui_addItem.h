/********************************************************************************
** Form generated from reading UI file 'addItem.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDITEM_H
#define UI_ADDITEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_addItem
{
public:
    QLineEdit *lineEdit_iName;
    QLabel *label;
    QLineEdit *lineEdit_iPrice;
    QLabel *label_2;
    QLineEdit *lineEdit_iQuan;
    QLabel *label_3;
    QPushButton *back_button;
    QPushButton *submit_button;
    QPushButton *logout_button;
    QLabel *label_4;

    void setupUi(QDialog *addItem)
    {
        if (addItem->objectName().isEmpty())
            addItem->setObjectName(QStringLiteral("addItem"));
        addItem->resize(400, 221);
        lineEdit_iName = new QLineEdit(addItem);
        lineEdit_iName->setObjectName(QStringLiteral("lineEdit_iName"));
        lineEdit_iName->setGeometry(QRect(100, 60, 281, 20));
        label = new QLabel(addItem);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 60, 71, 20));
        lineEdit_iPrice = new QLineEdit(addItem);
        lineEdit_iPrice->setObjectName(QStringLiteral("lineEdit_iPrice"));
        lineEdit_iPrice->setGeometry(QRect(100, 100, 281, 20));
        label_2 = new QLabel(addItem);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 100, 71, 20));
        lineEdit_iQuan = new QLineEdit(addItem);
        lineEdit_iQuan->setObjectName(QStringLiteral("lineEdit_iQuan"));
        lineEdit_iQuan->setGeometry(QRect(100, 140, 281, 20));
        label_3 = new QLabel(addItem);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 140, 81, 20));
        back_button = new QPushButton(addItem);
        back_button->setObjectName(QStringLiteral("back_button"));
        back_button->setGeometry(QRect(10, 10, 81, 31));
        submit_button = new QPushButton(addItem);
        submit_button->setObjectName(QStringLiteral("submit_button"));
        submit_button->setGeometry(QRect(170, 170, 81, 31));
        logout_button = new QPushButton(addItem);
        logout_button->setObjectName(QStringLiteral("logout_button"));
        logout_button->setGeometry(QRect(300, 10, 81, 31));
        label_4 = new QLabel(addItem);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(160, 20, 81, 16));

        retranslateUi(addItem);

        QMetaObject::connectSlotsByName(addItem);
    } // setupUi

    void retranslateUi(QDialog *addItem)
    {
        addItem->setWindowTitle(QApplication::translate("addItem", "Dialog", nullptr));
        label->setText(QApplication::translate("addItem", "Item Name:", nullptr));
        label_2->setText(QApplication::translate("addItem", "Item Price:", nullptr));
        label_3->setText(QApplication::translate("addItem", "Item Quantity:", nullptr));
        back_button->setText(QApplication::translate("addItem", "Back", nullptr));
        submit_button->setText(QApplication::translate("addItem", "Submit", nullptr));
        logout_button->setText(QApplication::translate("addItem", "Logout", nullptr));
        label_4->setText(QApplication::translate("addItem", "Add Item", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addItem: public Ui_addItem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDITEM_H
