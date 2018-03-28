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
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_listInventoryWindow
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_2;
    QLabel *label;
    QPushButton *pushButton;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QTableWidget *tableWidget;

    void setupUi(QDialog *listInventoryWindow)
    {
        if (listInventoryWindow->objectName().isEmpty())
            listInventoryWindow->setObjectName(QStringLiteral("listInventoryWindow"));
        listInventoryWindow->resize(864, 763);
        horizontalLayoutWidget = new QWidget(listInventoryWindow);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(0, 0, 661, 51));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_2 = new QPushButton(horizontalLayoutWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);

        label = new QLabel(horizontalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        pushButton = new QPushButton(horizontalLayoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);

        horizontalLayoutWidget_2 = new QWidget(listInventoryWindow);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(0, 50, 661, 51));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton_3 = new QPushButton(horizontalLayoutWidget_2);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        horizontalLayout_2->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(horizontalLayoutWidget_2);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));

        horizontalLayout_2->addWidget(pushButton_4);

        tableWidget = new QTableWidget(listInventoryWindow);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(0, 100, 661, 561));

        retranslateUi(listInventoryWindow);

        QMetaObject::connectSlotsByName(listInventoryWindow);
    } // setupUi

    void retranslateUi(QDialog *listInventoryWindow)
    {
        listInventoryWindow->setWindowTitle(QApplication::translate("listInventoryWindow", "Dialog", nullptr));
        pushButton_2->setText(QApplication::translate("listInventoryWindow", "Back", nullptr));
        label->setText(QApplication::translate("listInventoryWindow", "Inventory Window", nullptr));
        pushButton->setText(QApplication::translate("listInventoryWindow", "Logout", nullptr));
        pushButton_3->setText(QApplication::translate("listInventoryWindow", "All Items", nullptr));
        pushButton_4->setText(QApplication::translate("listInventoryWindow", "Search Item Stats", nullptr));
    } // retranslateUi

};

namespace Ui {
    class listInventoryWindow: public Ui_listInventoryWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LISTINVENTORYWINDOW_H
