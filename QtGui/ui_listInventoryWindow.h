/********************************************************************************
** Form generated from reading UI file 'listInventoryWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LISTINVENTORYWINDOW_H
#define UI_LISTINVENTORYWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_listInventoryWindow
{
public:
    QTableWidget *tableWidget;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_back;
    QSpacerItem *horizontalSpacer;
    QLabel *label_itemsSold;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_logout;

    void setupUi(QDialog *listInventoryWindow)
    {
        if (listInventoryWindow->objectName().isEmpty())
            listInventoryWindow->setObjectName(QStringLiteral("listInventoryWindow"));
        listInventoryWindow->resize(600, 700);
        listInventoryWindow->setMinimumSize(QSize(600, 700));
        listInventoryWindow->setMaximumSize(QSize(600, 700));
        tableWidget = new QTableWidget(listInventoryWindow);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(10, 50, 581, 641));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tableWidget->sizePolicy().hasHeightForWidth());
        tableWidget->setSizePolicy(sizePolicy);
        layoutWidget = new QWidget(listInventoryWindow);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 581, 26));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_back = new QPushButton(layoutWidget);
        pushButton_back->setObjectName(QStringLiteral("pushButton_back"));

        horizontalLayout->addWidget(pushButton_back);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label_itemsSold = new QLabel(layoutWidget);
        label_itemsSold->setObjectName(QStringLiteral("label_itemsSold"));

        horizontalLayout->addWidget(label_itemsSold);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        pushButton_logout = new QPushButton(layoutWidget);
        pushButton_logout->setObjectName(QStringLiteral("pushButton_logout"));

        horizontalLayout->addWidget(pushButton_logout);


        retranslateUi(listInventoryWindow);

        QMetaObject::connectSlotsByName(listInventoryWindow);
    } // setupUi

    void retranslateUi(QDialog *listInventoryWindow)
    {
        listInventoryWindow->setWindowTitle(QApplication::translate("listInventoryWindow", "Dialog", nullptr));
        pushButton_back->setText(QApplication::translate("listInventoryWindow", "Back", nullptr));
        label_itemsSold->setText(QApplication::translate("listInventoryWindow", "Items Sold", nullptr));
        pushButton_logout->setText(QApplication::translate("listInventoryWindow", "Logout", nullptr));
    } // retranslateUi

};

namespace Ui {
    class listInventoryWindow: public Ui_listInventoryWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LISTINVENTORYWINDOW_H
