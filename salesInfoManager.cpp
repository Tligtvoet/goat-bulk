#include "salesInfoManager.h"

// Constructor & Destructor
salesInfoManager::salesInfoManager() {}
salesInfoManager::~salesInfoManager() {}

// methods
salesInfoManager& salesInfoManager::instance()
{
    static salesInfoManager instance;

    return instance;
}

bool salesInfoManager::createSalesInfo(const salesInfo& salesInfo) const
{
    if(salesInfo.getItemDate().isEmpty() || salesInfo.getItemName().isEmpty() ||
       salesInfo.getMembID() <= 0        ||salesInfo.getItemCost() <= 0       ||
       salesInfo.getItemQuantity() <= 0)
    {
        qDebug() << "Cannot create sales info if any boxes are left empty";
        return false;
    }


    QSqlQuery insertQuery;
    insertQuery.prepare("INSERT INTO SalesInfo (id, date, item, cost, quantity) VALUES (:memID, :date, :name, :cost, :quan)");
    insertQuery.bindValue(":date", salesInfo.getItemDate());
    insertQuery.bindValue(":memID", salesInfo.getMembID());
    insertQuery.bindValue(":name", salesInfo.getItemName());
    insertQuery.bindValue(":cost", salesInfo.getItemCost());
    insertQuery.bindValue(":quan", salesInfo.getItemQuantity());

    if(insertQuery.exec())
    {
        qDebug() << "Purchase Added!";
        return true;
    }
    else
    {
        qDebug() << "Failed to create item: " << insertQuery.lastError();
        return false;
    }
}
