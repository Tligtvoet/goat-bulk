/********************************************************************************
** Form generated from reading UI file 'displayPurchases.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DISPLAYPURCHASES_H
#define UI_DISPLAYPURCHASES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_displayPurchases
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label;
    QTableWidget *tableWidget;
    QLabel *label_2;
    QLineEdit *lineEdit_id;
    QPushButton *pushButton_3;
    QLabel *label_3;
    QLabel *label_4;

    void setupUi(QDialog *displayPurchases)
    {
        if (displayPurchases->objectName().isEmpty())
            displayPurchases->setObjectName(QStringLiteral("displayPurchases"));
        displayPurchases->resize(673, 610);
        pushButton = new QPushButton(displayPurchases);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(10, 10, 113, 32));
        pushButton_2 = new QPushButton(displayPurchases);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(510, 10, 113, 32));
        label = new QLabel(displayPurchases);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(150, 20, 181, 21));
        tableWidget = new QTableWidget(displayPurchases);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(20, 90, 611, 501));
        label_2 = new QLabel(displayPurchases);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(260, 60, 111, 16));
        lineEdit_id = new QLineEdit(displayPurchases);
        lineEdit_id->setObjectName(QStringLiteral("lineEdit_id"));
        lineEdit_id->setGeometry(QRect(380, 50, 131, 31));
        pushButton_3 = new QPushButton(displayPurchases);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(510, 50, 113, 32));
        label_3 = new QLabel(displayPurchases);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 60, 91, 20));
        label_4 = new QLabel(displayPurchases);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(100, 60, 60, 16));

        retranslateUi(displayPurchases);

        QMetaObject::connectSlotsByName(displayPurchases);
    } // setupUi

    void retranslateUi(QDialog *displayPurchases)
    {
        displayPurchases->setWindowTitle(QApplication::translate("displayPurchases", "Dialog", nullptr));
        pushButton->setText(QApplication::translate("displayPurchases", "Back", nullptr));
        pushButton_2->setText(QApplication::translate("displayPurchases", "Logout", nullptr));
        label->setText(QApplication::translate("displayPurchases", "Display Total Purchases", nullptr));
        label_2->setText(QApplication::translate("displayPurchases", "Enter Member ID:", nullptr));
        pushButton_3->setText(QApplication::translate("displayPurchases", "Submit", nullptr));
        label_3->setText(QApplication::translate("displayPurchases", "Total Amount:", nullptr));
        label_4->setText(QApplication::translate("displayPurchases", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class displayPurchases: public Ui_displayPurchases {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DISPLAYPURCHASES_H
