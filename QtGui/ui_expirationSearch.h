/********************************************************************************
** Form generated from reading UI file 'expirationSearch.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXPIRATIONSEARCH_H
#define UI_EXPIRATIONSEARCH_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_expirationSearch
{
public:
    QLabel *label;
    QComboBox *comboBox_month;
    QTableWidget *tableWidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QDialog *expirationSearch)
    {
        if (expirationSearch->objectName().isEmpty())
            expirationSearch->setObjectName(QStringLiteral("expirationSearch"));
        expirationSearch->resize(827, 743);
        label = new QLabel(expirationSearch);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(240, 30, 381, 16));
        comboBox_month = new QComboBox(expirationSearch);
        comboBox_month->addItem(QString());
        comboBox_month->addItem(QString());
        comboBox_month->addItem(QString());
        comboBox_month->addItem(QString());
        comboBox_month->addItem(QString());
        comboBox_month->addItem(QString());
        comboBox_month->addItem(QString());
        comboBox_month->addItem(QString());
        comboBox_month->addItem(QString());
        comboBox_month->addItem(QString());
        comboBox_month->addItem(QString());
        comboBox_month->addItem(QString());
        comboBox_month->addItem(QString());
        comboBox_month->setObjectName(QStringLiteral("comboBox_month"));
        comboBox_month->setGeometry(QRect(240, 50, 361, 26));
        tableWidget = new QTableWidget(expirationSearch);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(20, 80, 701, 491));
        pushButton = new QPushButton(expirationSearch);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(0, 10, 113, 32));
        pushButton_2 = new QPushButton(expirationSearch);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(610, 10, 113, 32));
        label_2 = new QLabel(expirationSearch);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 40, 201, 16));
        label_3 = new QLabel(expirationSearch);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(110, 60, 121, 20));

        retranslateUi(expirationSearch);

        QMetaObject::connectSlotsByName(expirationSearch);
    } // setupUi

    void retranslateUi(QDialog *expirationSearch)
    {
        expirationSearch->setWindowTitle(QApplication::translate("expirationSearch", "Dialog", nullptr));
        label->setText(QApplication::translate("expirationSearch", "Enter a month to see which memberships expire in that month", nullptr));
        comboBox_month->setItemText(0, QApplication::translate("expirationSearch", "Select a month", nullptr));
        comboBox_month->setItemText(1, QApplication::translate("expirationSearch", "January", nullptr));
        comboBox_month->setItemText(2, QApplication::translate("expirationSearch", "February", nullptr));
        comboBox_month->setItemText(3, QApplication::translate("expirationSearch", "March", nullptr));
        comboBox_month->setItemText(4, QApplication::translate("expirationSearch", "April", nullptr));
        comboBox_month->setItemText(5, QApplication::translate("expirationSearch", "May", nullptr));
        comboBox_month->setItemText(6, QApplication::translate("expirationSearch", "June", nullptr));
        comboBox_month->setItemText(7, QApplication::translate("expirationSearch", "July", nullptr));
        comboBox_month->setItemText(8, QApplication::translate("expirationSearch", "August", nullptr));
        comboBox_month->setItemText(9, QApplication::translate("expirationSearch", "September", nullptr));
        comboBox_month->setItemText(10, QApplication::translate("expirationSearch", "October", nullptr));
        comboBox_month->setItemText(11, QApplication::translate("expirationSearch", "November", nullptr));
        comboBox_month->setItemText(12, QApplication::translate("expirationSearch", "December", nullptr));

        pushButton->setText(QApplication::translate("expirationSearch", "Back", nullptr));
        pushButton_2->setText(QApplication::translate("expirationSearch", "Logout", nullptr));
        label_2->setText(QApplication::translate("expirationSearch", "Annual Dues - Regular: $65.00", nullptr));
        label_3->setText(QApplication::translate("expirationSearch", "Executive: $120.00", nullptr));
    } // retranslateUi

};

namespace Ui {
    class expirationSearch: public Ui_expirationSearch {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXPIRATIONSEARCH_H
