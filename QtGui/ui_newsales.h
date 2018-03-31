/********************************************************************************
** Form generated from reading UI file 'newsales.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWSALES_H
#define UI_NEWSALES_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_newSales
{
public:
    QTableWidget *tableWidget;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_back;
    QSpacerItem *horizontalSpacer;
    QLabel *label_2;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QDateEdit *dateEdit_chooseDate;
    QPushButton *pushButton;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_totalRev;
    QLabel *label_3;
    QLabel *label_5;
    QLabel *label_reg;
    QLabel *label_4;
    QLabel *label_exec;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_6;
    QComboBox *comboBox;

    void setupUi(QWidget *newSales)
    {
        if (newSales->objectName().isEmpty())
            newSales->setObjectName(QStringLiteral("newSales"));
        newSales->resize(800, 700);
        newSales->setMinimumSize(QSize(800, 700));
        newSales->setMaximumSize(QSize(800, 700));
        tableWidget = new QTableWidget(newSales);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(10, 80, 781, 611));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tableWidget->sizePolicy().hasHeightForWidth());
        tableWidget->setSizePolicy(sizePolicy);
        layoutWidget = new QWidget(newSales);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 431, 32));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_back = new QPushButton(layoutWidget);
        pushButton_back->setObjectName(QStringLiteral("pushButton_back"));

        horizontalLayout->addWidget(pushButton_back);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        layoutWidget1 = new QWidget(newSales);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(516, 50, 281, 36));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget1);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_2->addWidget(label);

        dateEdit_chooseDate = new QDateEdit(layoutWidget1);
        dateEdit_chooseDate->setObjectName(QStringLiteral("dateEdit_chooseDate"));
        dateEdit_chooseDate->setDate(QDate(2018, 1, 1));

        horizontalLayout_2->addWidget(dateEdit_chooseDate);

        pushButton = new QPushButton(layoutWidget1);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout_2->addWidget(pushButton);

        horizontalLayoutWidget = new QWidget(newSales);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 40, 511, 41));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_totalRev = new QLabel(horizontalLayoutWidget);
        label_totalRev->setObjectName(QStringLiteral("label_totalRev"));
        label_totalRev->setEnabled(true);

        horizontalLayout_3->addWidget(label_totalRev);

        label_3 = new QLabel(horizontalLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setEnabled(true);
        label_3->setAutoFillBackground(false);

        horizontalLayout_3->addWidget(label_3);

        label_5 = new QLabel(horizontalLayoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_3->addWidget(label_5);

        label_reg = new QLabel(horizontalLayoutWidget);
        label_reg->setObjectName(QStringLiteral("label_reg"));

        horizontalLayout_3->addWidget(label_reg);

        label_4 = new QLabel(horizontalLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_3->addWidget(label_4);

        label_exec = new QLabel(horizontalLayoutWidget);
        label_exec->setObjectName(QStringLiteral("label_exec"));

        horizontalLayout_3->addWidget(label_exec);

        horizontalLayoutWidget_2 = new QWidget(newSales);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(510, 0, 170, 51));
        horizontalLayout_4 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(horizontalLayoutWidget_2);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_4->addWidget(label_6);

        comboBox = new QComboBox(horizontalLayoutWidget_2);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QStringLiteral("comboBox"));

        horizontalLayout_4->addWidget(comboBox);


        retranslateUi(newSales);

        QMetaObject::connectSlotsByName(newSales);
    } // setupUi

    void retranslateUi(QWidget *newSales)
    {
        newSales->setWindowTitle(QApplication::translate("newSales", "Form", nullptr));
        pushButton_back->setText(QApplication::translate("newSales", "Back", nullptr));
        label_2->setText(QApplication::translate("newSales", "Sales Report", nullptr));
        label->setText(QApplication::translate("newSales", "Select a Date:", nullptr));
        dateEdit_chooseDate->setDisplayFormat(QApplication::translate("newSales", "MM/dd/yyyy", nullptr));
        pushButton->setText(QApplication::translate("newSales", "Search", nullptr));
        label_totalRev->setText(QApplication::translate("newSales", "Total Revenue:", nullptr));
        label_3->setText(QApplication::translate("newSales", "total", nullptr));
        label_5->setText(QApplication::translate("newSales", "Regular Members:", nullptr));
        label_reg->setText(QApplication::translate("newSales", "total", nullptr));
        label_4->setText(QApplication::translate("newSales", "Executive Members:", nullptr));
        label_exec->setText(QApplication::translate("newSales", "total", nullptr));
        label_6->setText(QApplication::translate("newSales", "Sort By:", nullptr));
        comboBox->setItemText(0, QApplication::translate("newSales", "N/A", nullptr));
        comboBox->setItemText(1, QApplication::translate("newSales", "Executive", nullptr));
        comboBox->setItemText(2, QApplication::translate("newSales", "Regular", nullptr));

    } // retranslateUi

};

namespace Ui {
    class newSales: public Ui_newSales {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWSALES_H
