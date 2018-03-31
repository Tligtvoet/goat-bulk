/********************************************************************************
** Form generated from reading UI file 'addItem.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDITEM_H
#define UI_ADDITEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_addItem
{
public:
    QLineEdit *lineEdit_iName;
    QLabel *label;
    QLineEdit *lineEdit_iPrice;
    QLabel *label_2;
    QLineEdit *lineEdit_iQuan;
    QLabel *label_3;
    QPushButton *submit_button;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *back_button;
    QSpacerItem *horizontalSpacer;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *logout_button;

    void setupUi(QDialog *addItem)
    {
        if (addItem->objectName().isEmpty())
            addItem->setObjectName(QStringLiteral("addItem"));
        addItem->resize(600, 700);
        addItem->setMinimumSize(QSize(600, 700));
        addItem->setMaximumSize(QSize(600, 700));
        lineEdit_iName = new QLineEdit(addItem);
        lineEdit_iName->setObjectName(QStringLiteral("lineEdit_iName"));
        lineEdit_iName->setGeometry(QRect(180, 150, 281, 20));
        label = new QLabel(addItem);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(90, 150, 71, 20));
        lineEdit_iPrice = new QLineEdit(addItem);
        lineEdit_iPrice->setObjectName(QStringLiteral("lineEdit_iPrice"));
        lineEdit_iPrice->setGeometry(QRect(180, 210, 281, 20));
        label_2 = new QLabel(addItem);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(90, 210, 71, 20));
        lineEdit_iQuan = new QLineEdit(addItem);
        lineEdit_iQuan->setObjectName(QStringLiteral("lineEdit_iQuan"));
        lineEdit_iQuan->setGeometry(QRect(180, 270, 281, 20));
        label_3 = new QLabel(addItem);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(90, 270, 81, 20));
        submit_button = new QPushButton(addItem);
        submit_button->setObjectName(QStringLiteral("submit_button"));
        submit_button->setGeometry(QRect(180, 330, 100, 30));
        widget = new QWidget(addItem);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(10, 10, 581, 26));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        back_button = new QPushButton(widget);
        back_button->setObjectName(QStringLiteral("back_button"));

        horizontalLayout->addWidget(back_button);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout->addWidget(label_4);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        logout_button = new QPushButton(widget);
        logout_button->setObjectName(QStringLiteral("logout_button"));

        horizontalLayout->addWidget(logout_button);


        retranslateUi(addItem);

        QMetaObject::connectSlotsByName(addItem);
    } // setupUi

    void retranslateUi(QDialog *addItem)
    {
        addItem->setWindowTitle(QApplication::translate("addItem", "Dialog", nullptr));
        label->setText(QApplication::translate("addItem", "Item Name:", nullptr));
        label_2->setText(QApplication::translate("addItem", "Item Price:", nullptr));
        label_3->setText(QApplication::translate("addItem", "Item Quantity:", nullptr));
        submit_button->setText(QApplication::translate("addItem", "Submit", nullptr));
        back_button->setText(QApplication::translate("addItem", "Back", nullptr));
        label_4->setText(QApplication::translate("addItem", "Add Item", nullptr));
        logout_button->setText(QApplication::translate("addItem", "Logout", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addItem: public Ui_addItem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDITEM_H
