#ifndef INVENTORYMANAGER_H
#define INVENTORYMANAGER_H

#include "inventory.h"
#include "dbmanager.h"
#include <QMessageBox>
#include <QSqlQuery>
#include <QSqlError>
#include <QSqlRecord>
#include <QVariant> //need for bindValue call.
#include <QDebug>

class inventoryManager
{
public:
    static inventoryManager& instance();

    inventoryManager(inventoryManager const&) = delete;  // Don't forget to disable copy
    void operator=(inventoryManager const&) = delete; // Don't forget to disable copy

    bool createInventory(const inventory& inventory) const;
    bool deleteInventory(int iID) const;

private:
    inventoryManager();  // forbid creation outside class
    ~inventoryManager(); // forbid to delete instance outside

};

#endif // INVENTORYMANAGER_H
