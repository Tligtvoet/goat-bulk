/********************************************************************************
** Form generated from reading UI file 'expirationSearch.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXPIRATIONSEARCH_H
#define UI_EXPIRATIONSEARCH_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_expirationSearch
{
public:
    QLabel *label;
    QComboBox *comboBox_month;
    QTableWidget *tableWidget;
    QLabel *label_annualDues;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer;
    QLabel *label_memberExpiration;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_2;
    QWidget *widget1;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QDialog *expirationSearch)
    {
        if (expirationSearch->objectName().isEmpty())
            expirationSearch->setObjectName(QStringLiteral("expirationSearch"));
        expirationSearch->resize(600, 700);
        expirationSearch->setMinimumSize(QSize(600, 700));
        expirationSearch->setMaximumSize(QSize(600, 700));
        label = new QLabel(expirationSearch);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(210, 90, 381, 16));
        comboBox_month = new QComboBox(expirationSearch);
        comboBox_month->addItem(QString());
        comboBox_month->addItem(QString());
        comboBox_month->addItem(QString());
        comboBox_month->addItem(QString());
        comboBox_month->addItem(QString());
        comboBox_month->addItem(QString());
        comboBox_month->addItem(QString());
        comboBox_month->addItem(QString());
        comboBox_month->addItem(QString());
        comboBox_month->addItem(QString());
        comboBox_month->addItem(QString());
        comboBox_month->addItem(QString());
        comboBox_month->addItem(QString());
        comboBox_month->setObjectName(QStringLiteral("comboBox_month"));
        comboBox_month->setGeometry(QRect(450, 110, 141, 26));
        tableWidget = new QTableWidget(expirationSearch);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(10, 140, 581, 551));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tableWidget->sizePolicy().hasHeightForWidth());
        tableWidget->setSizePolicy(sizePolicy);
        label_annualDues = new QLabel(expirationSearch);
        label_annualDues->setObjectName(QStringLiteral("label_annualDues"));
        label_annualDues->setGeometry(QRect(10, 40, 81, 16));
        widget = new QWidget(expirationSearch);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(10, 10, 581, 26));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label_memberExpiration = new QLabel(widget);
        label_memberExpiration->setObjectName(QStringLiteral("label_memberExpiration"));

        horizontalLayout->addWidget(label_memberExpiration);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);

        widget1 = new QWidget(expirationSearch);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(20, 60, 119, 41));
        verticalLayout = new QVBoxLayout(widget1);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget1);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(widget1);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout->addWidget(label_3);


        retranslateUi(expirationSearch);

        QMetaObject::connectSlotsByName(expirationSearch);
    } // setupUi

    void retranslateUi(QDialog *expirationSearch)
    {
        expirationSearch->setWindowTitle(QApplication::translate("expirationSearch", "Dialog", nullptr));
        label->setText(QApplication::translate("expirationSearch", "Enter a month to see which memberships expire in that month", nullptr));
        comboBox_month->setItemText(0, QApplication::translate("expirationSearch", "Select a month", nullptr));
        comboBox_month->setItemText(1, QApplication::translate("expirationSearch", "January", nullptr));
        comboBox_month->setItemText(2, QApplication::translate("expirationSearch", "February", nullptr));
        comboBox_month->setItemText(3, QApplication::translate("expirationSearch", "March", nullptr));
        comboBox_month->setItemText(4, QApplication::translate("expirationSearch", "April", nullptr));
        comboBox_month->setItemText(5, QApplication::translate("expirationSearch", "May", nullptr));
        comboBox_month->setItemText(6, QApplication::translate("expirationSearch", "June", nullptr));
        comboBox_month->setItemText(7, QApplication::translate("expirationSearch", "July", nullptr));
        comboBox_month->setItemText(8, QApplication::translate("expirationSearch", "August", nullptr));
        comboBox_month->setItemText(9, QApplication::translate("expirationSearch", "September", nullptr));
        comboBox_month->setItemText(10, QApplication::translate("expirationSearch", "October", nullptr));
        comboBox_month->setItemText(11, QApplication::translate("expirationSearch", "November", nullptr));
        comboBox_month->setItemText(12, QApplication::translate("expirationSearch", "December", nullptr));

        label_annualDues->setText(QApplication::translate("expirationSearch", "Annual Dues:", nullptr));
        pushButton->setText(QApplication::translate("expirationSearch", "Back", nullptr));
        label_memberExpiration->setText(QApplication::translate("expirationSearch", "Member Expiration", nullptr));
        pushButton_2->setText(QApplication::translate("expirationSearch", "Logout", nullptr));
        label_2->setText(QApplication::translate("expirationSearch", "Regular: $65.00", nullptr));
        label_3->setText(QApplication::translate("expirationSearch", "Executive: $120.00", nullptr));
    } // retranslateUi

};

namespace Ui {
    class expirationSearch: public Ui_expirationSearch {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXPIRATIONSEARCH_H
