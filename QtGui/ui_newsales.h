/********************************************************************************
** Form generated from reading UI file 'newsales.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWSALES_H
#define UI_NEWSALES_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_newSales
{
public:
    QPushButton *pushButton_back;
    QTableWidget *tableWidget;
    QDateEdit *dateEdit_chooseDate;
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QWidget *newSales)
    {
        if (newSales->objectName().isEmpty())
            newSales->setObjectName(QStringLiteral("newSales"));
        newSales->resize(761, 610);
        newSales->setMinimumSize(QSize(649, 500));
        pushButton_back = new QPushButton(newSales);
        pushButton_back->setObjectName(QStringLiteral("pushButton_back"));
        pushButton_back->setGeometry(QRect(670, 580, 80, 24));
        pushButton_back->setMinimumSize(QSize(80, 24));
        pushButton_back->setMaximumSize(QSize(80, 24));
        tableWidget = new QTableWidget(newSales);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(10, 40, 741, 531));
        dateEdit_chooseDate = new QDateEdit(newSales);
        dateEdit_chooseDate->setObjectName(QStringLiteral("dateEdit_chooseDate"));
        dateEdit_chooseDate->setGeometry(QRect(100, 10, 110, 21));
        dateEdit_chooseDate->setDate(QDate(2018, 1, 1));
        label = new QLabel(newSales);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 10, 71, 21));
        pushButton = new QPushButton(newSales);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(220, 10, 75, 21));

        retranslateUi(newSales);

        QMetaObject::connectSlotsByName(newSales);
    } // setupUi

    void retranslateUi(QWidget *newSales)
    {
        newSales->setWindowTitle(QApplication::translate("newSales", "Form", nullptr));
        pushButton_back->setText(QApplication::translate("newSales", "Back", nullptr));
        dateEdit_chooseDate->setDisplayFormat(QApplication::translate("newSales", "MM/dd/yyyy", nullptr));
        label->setText(QApplication::translate("newSales", "Select a Date:", nullptr));
        pushButton->setText(QApplication::translate("newSales", "Search", nullptr));
    } // retranslateUi

};

namespace Ui {
    class newSales: public Ui_newSales {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWSALES_H
