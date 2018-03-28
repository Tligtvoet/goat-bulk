/********************************************************************************
** Form generated from reading UI file 'displayItem.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DISPLAYITEM_H
#define UI_DISPLAYITEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_displayItem
{
public:
    QPushButton *pushButton_2;
    QLabel *label;
    QPushButton *pushButton;
    QLineEdit *lineEdit_itemName;
    QTableWidget *tableWidget;
    QPushButton *pushButton_3;
    QLabel *label_2;

    void setupUi(QDialog *displayItem)
    {
        if (displayItem->objectName().isEmpty())
            displayItem->setObjectName(QStringLiteral("displayItem"));
        displayItem->resize(657, 689);
        pushButton_2 = new QPushButton(displayItem);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(500, 10, 113, 32));
        label = new QLabel(displayItem);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(120, 10, 181, 21));
        pushButton = new QPushButton(displayItem);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(0, 10, 113, 32));
        lineEdit_itemName = new QLineEdit(displayItem);
        lineEdit_itemName->setObjectName(QStringLiteral("lineEdit_itemName"));
        lineEdit_itemName->setGeometry(QRect(220, 40, 131, 31));
        tableWidget = new QTableWidget(displayItem);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(10, 90, 611, 501));
        pushButton_3 = new QPushButton(displayItem);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(360, 40, 113, 32));
        label_2 = new QLabel(displayItem);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(110, 50, 111, 16));

        retranslateUi(displayItem);

        QMetaObject::connectSlotsByName(displayItem);
    } // setupUi

    void retranslateUi(QDialog *displayItem)
    {
        displayItem->setWindowTitle(QApplication::translate("displayItem", "Dialog", nullptr));
        pushButton_2->setText(QApplication::translate("displayItem", "Logout", nullptr));
        label->setText(QApplication::translate("displayItem", "Item Statistics", nullptr));
        pushButton->setText(QApplication::translate("displayItem", "Back", nullptr));
        pushButton_3->setText(QApplication::translate("displayItem", "Submit", nullptr));
        label_2->setText(QApplication::translate("displayItem", "Enter Item Name:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class displayItem: public Ui_displayItem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DISPLAYITEM_H
