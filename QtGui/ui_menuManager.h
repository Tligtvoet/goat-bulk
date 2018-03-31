/********************************************************************************
** Form generated from reading UI file 'menuManager.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENUMANAGER_H
#define UI_MENUMANAGER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_menuManager
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_logout;
    QSpacerItem *horizontalSpacer;
    QLabel *label_welcomeManager;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_displaySalesReport;
    QPushButton *pushButton_displayPurchases;
    QPushButton *pushButton_inventory;
    QPushButton *pushButton_itemSearch;
    QPushButton *pushButton_displayMembers;

    void setupUi(QDialog *menuManager)
    {
        if (menuManager->objectName().isEmpty())
            menuManager->setObjectName(QStringLiteral("menuManager"));
        menuManager->resize(600, 700);
        menuManager->setMinimumSize(QSize(600, 700));
        menuManager->setMaximumSize(QSize(600, 700));
        layoutWidget = new QWidget(menuManager);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(9, 10, 361, 26));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_logout = new QPushButton(layoutWidget);
        pushButton_logout->setObjectName(QStringLiteral("pushButton_logout"));

        horizontalLayout->addWidget(pushButton_logout);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label_welcomeManager = new QLabel(layoutWidget);
        label_welcomeManager->setObjectName(QStringLiteral("label_welcomeManager"));

        horizontalLayout->addWidget(label_welcomeManager);

        widget = new QWidget(menuManager);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(10, 170, 581, 371));
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        pushButton_displaySalesReport = new QPushButton(widget);
        pushButton_displaySalesReport->setObjectName(QStringLiteral("pushButton_displaySalesReport"));
        pushButton_displaySalesReport->setIconSize(QSize(16, 16));

        verticalLayout->addWidget(pushButton_displaySalesReport);

        pushButton_displayPurchases = new QPushButton(widget);
        pushButton_displayPurchases->setObjectName(QStringLiteral("pushButton_displayPurchases"));

        verticalLayout->addWidget(pushButton_displayPurchases);

        pushButton_inventory = new QPushButton(widget);
        pushButton_inventory->setObjectName(QStringLiteral("pushButton_inventory"));

        verticalLayout->addWidget(pushButton_inventory);

        pushButton_itemSearch = new QPushButton(widget);
        pushButton_itemSearch->setObjectName(QStringLiteral("pushButton_itemSearch"));

        verticalLayout->addWidget(pushButton_itemSearch);


        horizontalLayout_2->addLayout(verticalLayout);

        pushButton_displayMembers = new QPushButton(widget);
        pushButton_displayMembers->setObjectName(QStringLiteral("pushButton_displayMembers"));

        horizontalLayout_2->addWidget(pushButton_displayMembers);


        retranslateUi(menuManager);

        QMetaObject::connectSlotsByName(menuManager);
    } // setupUi

    void retranslateUi(QDialog *menuManager)
    {
        menuManager->setWindowTitle(QApplication::translate("menuManager", "Dialog", nullptr));
        pushButton_logout->setText(QApplication::translate("menuManager", "Logout", nullptr));
        label_welcomeManager->setText(QApplication::translate("menuManager", "Welcome Manager", nullptr));
        pushButton_displaySalesReport->setText(QApplication::translate("menuManager", "Display Sales Report", nullptr));
        pushButton_displayPurchases->setText(QApplication::translate("menuManager", "Display Purchases", nullptr));
        pushButton_inventory->setText(QApplication::translate("menuManager", "Inventory", nullptr));
        pushButton_itemSearch->setText(QApplication::translate("menuManager", "Item Search", nullptr));
        pushButton_displayMembers->setText(QApplication::translate("menuManager", "Display Members", nullptr));
    } // retranslateUi

};

namespace Ui {
    class menuManager: public Ui_menuManager {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENUMANAGER_H
