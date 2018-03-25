#include "inventoryManager.h"

// Constructor & Destructor
inventoryManager::inventoryManager() {}
inventoryManager::~inventoryManager() {}

// methods
inventoryManager& inventoryManager::instance()
{
    static inventoryManager instance;

    return instance;
}

bool inventoryManager::createInventory(const inventory& inventory) const
{
    if(inventory.getItemName().isEmpty() || inventory.getItemPrice() <= 0)
    {
        qDebug() << "Cannot create an item if it's name or price is not provided";
        return false;
    }

    QSqlQuery insertQuery;
    insertQuery.prepare("INSERT INTO Inventory (itemID, itemName, itemPrice, itemQuantity) VALUES (:iID, :iName, :iPrice, :iQuan)");
    insertQuery.bindValue("iID", inventory.getItemID());
    insertQuery.bindValue(":iName", inventory.getItemName());
    insertQuery.bindValue(":iPrice", inventory.getItemPrice());
    insertQuery.bindValue(":iQuan", inventory.getItemQuantity());

    if(insertQuery.exec())
    {
        qDebug() << "Item creation succeeded!";
        return true;
    }
    else
    {
        qDebug() << "Item creation failed: " << insertQuery.lastError();
        return false;
    }
}

bool inventoryManager::deleteInventory(int itemId) const
{
    QSqlQuery deleteQuery;
    deleteQuery.prepare("DELETE FROM Inventory WHERE itemID = :iID");
    deleteQuery.bindValue(":iID", itemId);

    if(deleteQuery.exec())
    {
        return true;
    }
    else
    {
        return false;
    }
}


