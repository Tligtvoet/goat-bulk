#ifndef SALESINFOMANAGER_H
#define SALESINFOMANAGER_H

#include "salesInfo.h"
#include "inventorymanager.h"
#include <QMessageBox>
#include <QSqlQuery>
#include <QSqlError>
#include <QSqlRecord>
#include <QVariant> //need for bindValue call.
#include <QDebug>
#include <QDialog>

class salesInfoManager
{
public:
    static salesInfoManager& instance();

    salesInfoManager(salesInfoManager const&) = delete;  // Don't forget to disable copy
    void operator=(salesInfoManager const&) = delete; // Don't forget to disable copy

    bool createSalesInfo(const salesInfo& salesInfo) const;

private:
    salesInfoManager();  // forbid creation outside class
    ~salesInfoManager(); // forbid to delete instance outside
};

#endif // SALESINFOMANAGER_H
