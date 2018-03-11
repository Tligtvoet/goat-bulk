/********************************************************************************
** Form generated from reading UI file 'newsales.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWSALES_H
#define UI_NEWSALES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_newSales
{
public:
    QPushButton *pushButton_back;
    QComboBox *comboBox;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QTextBrowser *textBrowser;
    QPushButton *pushButton_edit;
    QPushButton *pushButton_save;

    void setupUi(QWidget *newSales)
    {
        if (newSales->objectName().isEmpty())
            newSales->setObjectName(QStringLiteral("newSales"));
        newSales->resize(649, 500);
        newSales->setMinimumSize(QSize(649, 500));
        newSales->setMaximumSize(QSize(649, 500));
        pushButton_back = new QPushButton(newSales);
        pushButton_back->setObjectName(QStringLiteral("pushButton_back"));
        pushButton_back->setGeometry(QRect(530, 462, 80, 24));
        pushButton_back->setMinimumSize(QSize(80, 24));
        pushButton_back->setMaximumSize(QSize(80, 24));
        comboBox = new QComboBox(newSales);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(22, 462, 141, 24));
        comboBox->setMinimumSize(QSize(141, 24));
        comboBox->setMaximumSize(QSize(141, 24));
        scrollArea = new QScrollArea(newSales);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setGeometry(QRect(22, 43, 591, 411));
        scrollArea->setMinimumSize(QSize(591, 411));
        scrollArea->setMaximumSize(QSize(591, 411));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 589, 409));
        textBrowser = new QTextBrowser(scrollAreaWidgetContents);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(0, 0, 591, 411));
        textBrowser->setMinimumSize(QSize(591, 0));
        textBrowser->setMaximumSize(QSize(591, 411));
        scrollArea->setWidget(scrollAreaWidgetContents);
        pushButton_edit = new QPushButton(newSales);
        pushButton_edit->setObjectName(QStringLiteral("pushButton_edit"));
        pushButton_edit->setGeometry(QRect(530, 10, 80, 24));
        pushButton_edit->setMinimumSize(QSize(80, 24));
        pushButton_edit->setMaximumSize(QSize(80, 24));
        pushButton_save = new QPushButton(newSales);
        pushButton_save->setObjectName(QStringLiteral("pushButton_save"));
        pushButton_save->setEnabled(true);
        pushButton_save->setGeometry(QRect(440, 10, 80, 24));
        pushButton_save->setMinimumSize(QSize(80, 24));
        pushButton_save->setMaximumSize(QSize(80, 24));

        retranslateUi(newSales);

        QMetaObject::connectSlotsByName(newSales);
    } // setupUi

    void retranslateUi(QWidget *newSales)
    {
        newSales->setWindowTitle(QApplication::translate("newSales", "Form", nullptr));
        pushButton_back->setText(QApplication::translate("newSales", "Back", nullptr));
        comboBox->setItemText(0, QApplication::translate("newSales", "Select", nullptr));
        comboBox->setItemText(1, QApplication::translate("newSales", "Day 1", nullptr));
        comboBox->setItemText(2, QApplication::translate("newSales", "Day 2", nullptr));
        comboBox->setItemText(3, QApplication::translate("newSales", "Day 3", nullptr));
        comboBox->setItemText(4, QApplication::translate("newSales", "Day 4", nullptr));
        comboBox->setItemText(5, QApplication::translate("newSales", "Day 5", nullptr));
        comboBox->setItemText(6, QApplication::translate("newSales", "Day 6", nullptr));
        comboBox->setItemText(7, QApplication::translate("newSales", "Day 7", nullptr));

        pushButton_edit->setText(QApplication::translate("newSales", "Edit", nullptr));
        pushButton_save->setText(QApplication::translate("newSales", "Save", nullptr));
    } // retranslateUi

};

namespace Ui {
    class newSales: public Ui_newSales {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWSALES_H
