/********************************************************************************
** Form generated from reading UI file 'deleteItem.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETEITEM_H
#define UI_DELETEITEM_H

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

class Ui_deleteItem
{
public:
    QLineEdit *lineEdit_id;
    QPushButton *pushButton_3;
    QTableWidget *tableWidget;
    QLabel *label_id;
    QLabel *label_2;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_back;
    QSpacerItem *horizontalSpacer;
    QLabel *label_deletemember;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_logout;

    void setupUi(QDialog *deleteItem)
    {
        if (deleteItem->objectName().isEmpty())
            deleteItem->setObjectName(QStringLiteral("deleteItem"));
        deleteItem->resize(600, 700);
        deleteItem->setMinimumSize(QSize(600, 700));
        deleteItem->setMaximumSize(QSize(600, 700));
        lineEdit_id = new QLineEdit(deleteItem);
        lineEdit_id->setObjectName(QStringLiteral("lineEdit_id"));
        lineEdit_id->setGeometry(QRect(150, 70, 151, 21));
        pushButton_3 = new QPushButton(deleteItem);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(150, 100, 100, 30));
        tableWidget = new QTableWidget(deleteItem);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(10, 140, 581, 551));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tableWidget->sizePolicy().hasHeightForWidth());
        tableWidget->setSizePolicy(sizePolicy);
        label_id = new QLabel(deleteItem);
        label_id->setObjectName(QStringLiteral("label_id"));
        label_id->setGeometry(QRect(90, 70, 51, 20));
        label_2 = new QLabel(deleteItem);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(90, 50, 141, 16));
        widget = new QWidget(deleteItem);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(10, 10, 581, 26));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_back = new QPushButton(widget);
        pushButton_back->setObjectName(QStringLiteral("pushButton_back"));

        horizontalLayout->addWidget(pushButton_back);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label_deletemember = new QLabel(widget);
        label_deletemember->setObjectName(QStringLiteral("label_deletemember"));

        horizontalLayout->addWidget(label_deletemember);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        pushButton_logout = new QPushButton(widget);
        pushButton_logout->setObjectName(QStringLiteral("pushButton_logout"));

        horizontalLayout->addWidget(pushButton_logout);


        retranslateUi(deleteItem);

        QMetaObject::connectSlotsByName(deleteItem);
    } // setupUi

    void retranslateUi(QDialog *deleteItem)
    {
        deleteItem->setWindowTitle(QApplication::translate("deleteItem", "Dialog", nullptr));
        pushButton_3->setText(QApplication::translate("deleteItem", "Submit", nullptr));
        label_id->setText(QApplication::translate("deleteItem", "Item ID: ", nullptr));
        label_2->setText(QApplication::translate("deleteItem", "Delete By ID Number", nullptr));
        pushButton_back->setText(QApplication::translate("deleteItem", "Back", nullptr));
        label_deletemember->setText(QApplication::translate("deleteItem", "Delete Item", nullptr));
        pushButton_logout->setText(QApplication::translate("deleteItem", "Logout", nullptr));
    } // retranslateUi

};

namespace Ui {
    class deleteItem: public Ui_deleteItem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETEITEM_H
