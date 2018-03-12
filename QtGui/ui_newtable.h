/********************************************************************************
** Form generated from reading UI file 'newtable.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWTABLE_H
#define UI_NEWTABLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_newTable
{
public:
    QTableWidget *tableWidget;

    void setupUi(QWidget *newTable)
    {
        if (newTable->objectName().isEmpty())
            newTable->setObjectName(QStringLiteral("newTable"));
        newTable->resize(720, 427);
        tableWidget = new QTableWidget(newTable);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(20, 50, 681, 331));

        retranslateUi(newTable);

        QMetaObject::connectSlotsByName(newTable);
    } // setupUi

    void retranslateUi(QWidget *newTable)
    {
        newTable->setWindowTitle(QApplication::translate("newTable", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class newTable: public Ui_newTable {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWTABLE_H
