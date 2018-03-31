/********************************************************************************
** Form generated from reading UI file 'addSalesInfo.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDSALESINFO_H
#define UI_ADDSALESINFO_H

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

class Ui_addSalesInfo
{
public:
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *lineEdit_itemDate;
    QLineEdit *lineEdit_membID;
    QLineEdit *lineEdit_itemName;
    QLineEdit *lineEdit_itemCost;
    QLineEdit *lineEdit_itemQuantity;
    QPushButton *button_submit;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *back_button;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *logout_button;

    void setupUi(QDialog *addSalesInfo)
    {
        if (addSalesInfo->objectName().isEmpty())
            addSalesInfo->setObjectName(QStringLiteral("addSalesInfo"));
        addSalesInfo->resize(600, 700);
        addSalesInfo->setMinimumSize(QSize(600, 700));
        addSalesInfo->setMaximumSize(QSize(600, 700));
        label_2 = new QLabel(addSalesInfo);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(90, 130, 60, 16));
        label_3 = new QLabel(addSalesInfo);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(90, 180, 81, 20));
        label_4 = new QLabel(addSalesInfo);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(90, 230, 81, 20));
        label_5 = new QLabel(addSalesInfo);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(90, 280, 60, 16));
        label_6 = new QLabel(addSalesInfo);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(90, 330, 60, 16));
        lineEdit_itemDate = new QLineEdit(addSalesInfo);
        lineEdit_itemDate->setObjectName(QStringLiteral("lineEdit_itemDate"));
        lineEdit_itemDate->setGeometry(QRect(170, 130, 191, 21));
        lineEdit_membID = new QLineEdit(addSalesInfo);
        lineEdit_membID->setObjectName(QStringLiteral("lineEdit_membID"));
        lineEdit_membID->setGeometry(QRect(170, 180, 191, 21));
        lineEdit_itemName = new QLineEdit(addSalesInfo);
        lineEdit_itemName->setObjectName(QStringLiteral("lineEdit_itemName"));
        lineEdit_itemName->setGeometry(QRect(170, 230, 191, 21));
        lineEdit_itemCost = new QLineEdit(addSalesInfo);
        lineEdit_itemCost->setObjectName(QStringLiteral("lineEdit_itemCost"));
        lineEdit_itemCost->setGeometry(QRect(170, 280, 191, 21));
        lineEdit_itemQuantity = new QLineEdit(addSalesInfo);
        lineEdit_itemQuantity->setObjectName(QStringLiteral("lineEdit_itemQuantity"));
        lineEdit_itemQuantity->setGeometry(QRect(170, 330, 191, 21));
        button_submit = new QPushButton(addSalesInfo);
        button_submit->setObjectName(QStringLiteral("button_submit"));
        button_submit->setGeometry(QRect(170, 380, 100, 30));
        widget = new QWidget(addSalesInfo);
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

        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        logout_button = new QPushButton(widget);
        logout_button->setObjectName(QStringLiteral("logout_button"));

        horizontalLayout->addWidget(logout_button);


        retranslateUi(addSalesInfo);

        QMetaObject::connectSlotsByName(addSalesInfo);
    } // setupUi

    void retranslateUi(QDialog *addSalesInfo)
    {
        addSalesInfo->setWindowTitle(QApplication::translate("addSalesInfo", "Dialog", nullptr));
        label_2->setText(QApplication::translate("addSalesInfo", "Date:", nullptr));
        label_3->setText(QApplication::translate("addSalesInfo", "Member ID:", nullptr));
        label_4->setText(QApplication::translate("addSalesInfo", "Item Name:", nullptr));
        label_5->setText(QApplication::translate("addSalesInfo", "Price: ", nullptr));
        label_6->setText(QApplication::translate("addSalesInfo", "Quantity:", nullptr));
        button_submit->setText(QApplication::translate("addSalesInfo", "Submit", nullptr));
        back_button->setText(QApplication::translate("addSalesInfo", "Back", nullptr));
        label->setText(QApplication::translate("addSalesInfo", "New Sales Purchase", nullptr));
        logout_button->setText(QApplication::translate("addSalesInfo", "Logout", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addSalesInfo: public Ui_addSalesInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDSALESINFO_H
