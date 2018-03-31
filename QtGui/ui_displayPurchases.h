/********************************************************************************
** Form generated from reading UI file 'displayPurchases.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DISPLAYPURCHASES_H
#define UI_DISPLAYPURCHASES_H

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

class Ui_displayPurchases
{
public:
    QTableWidget *tableWidget;
    QLabel *label_2;
    QLineEdit *lineEdit_id;
    QPushButton *pushButton_3;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_2;
    QLabel *label_3;
    QLabel *label_4;

    void setupUi(QDialog *displayPurchases)
    {
        if (displayPurchases->objectName().isEmpty())
            displayPurchases->setObjectName(QStringLiteral("displayPurchases"));
        displayPurchases->resize(600, 700);
        displayPurchases->setMinimumSize(QSize(600, 700));
        displayPurchases->setMaximumSize(QSize(600, 700));
        tableWidget = new QTableWidget(displayPurchases);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(10, 130, 581, 561));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tableWidget->sizePolicy().hasHeightForWidth());
        tableWidget->setSizePolicy(sizePolicy);
        label_2 = new QLabel(displayPurchases);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(90, 50, 111, 16));
        lineEdit_id = new QLineEdit(displayPurchases);
        lineEdit_id->setObjectName(QStringLiteral("lineEdit_id"));
        lineEdit_id->setGeometry(QRect(210, 50, 131, 21));
        pushButton_3 = new QPushButton(displayPurchases);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(210, 90, 100, 30));
        layoutWidget = new QWidget(displayPurchases);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 581, 26));
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

        label_3 = new QLabel(displayPurchases);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(410, 51, 86, 16));
        label_4 = new QLabel(displayPurchases);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(530, 51, 60, 16));

        retranslateUi(displayPurchases);

        QMetaObject::connectSlotsByName(displayPurchases);
    } // setupUi

    void retranslateUi(QDialog *displayPurchases)
    {
        displayPurchases->setWindowTitle(QApplication::translate("displayPurchases", "Dialog", nullptr));
        label_2->setText(QApplication::translate("displayPurchases", "Enter Member ID:", nullptr));
        pushButton_3->setText(QApplication::translate("displayPurchases", "Submit", nullptr));
        pushButton->setText(QApplication::translate("displayPurchases", "Back", nullptr));
        label->setText(QApplication::translate("displayPurchases", "Display Total Purchases", nullptr));
        pushButton_2->setText(QApplication::translate("displayPurchases", "Logout", nullptr));
        label_3->setText(QApplication::translate("displayPurchases", "Total Amount:", nullptr));
        label_4->setText(QApplication::translate("displayPurchases", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class displayPurchases: public Ui_displayPurchases {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DISPLAYPURCHASES_H
