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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_displayItem
{
public:
    QLineEdit *lineEdit_itemName;
    QTableWidget *tableWidget;
    QPushButton *pushButton_3;
    QLabel *label_2;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_2;

    void setupUi(QDialog *displayItem)
    {
        if (displayItem->objectName().isEmpty())
            displayItem->setObjectName(QStringLiteral("displayItem"));
        displayItem->resize(800, 700);
        displayItem->setMinimumSize(QSize(800, 700));
        displayItem->setMaximumSize(QSize(800, 700));
        lineEdit_itemName = new QLineEdit(displayItem);
        lineEdit_itemName->setObjectName(QStringLiteral("lineEdit_itemName"));
        lineEdit_itemName->setGeometry(QRect(200, 50, 131, 21));
        tableWidget = new QTableWidget(displayItem);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(10, 130, 781, 561));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tableWidget->sizePolicy().hasHeightForWidth());
        tableWidget->setSizePolicy(sizePolicy);
        pushButton_3 = new QPushButton(displayItem);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(200, 90, 100, 30));
        label_2 = new QLabel(displayItem);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(90, 50, 111, 16));
        layoutWidget = new QWidget(displayItem);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 781, 26));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);


        retranslateUi(displayItem);

        QMetaObject::connectSlotsByName(displayItem);
    } // setupUi

    void retranslateUi(QDialog *displayItem)
    {
        displayItem->setWindowTitle(QApplication::translate("displayItem", "Dialog", nullptr));
        pushButton_3->setText(QApplication::translate("displayItem", "Submit", nullptr));
        label_2->setText(QApplication::translate("displayItem", "Enter Item Name:", nullptr));
        pushButton->setText(QApplication::translate("displayItem", "Back", nullptr));
        label->setText(QApplication::translate("displayItem", "Item Statistics", nullptr));
        pushButton_2->setText(QApplication::translate("displayItem", "Logout", nullptr));
    } // retranslateUi

};

namespace Ui {
    class displayItem: public Ui_displayItem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DISPLAYITEM_H
