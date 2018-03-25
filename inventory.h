#ifndef INVENTORY_H
#define INVENTORY_H

#include "constants.h"
#include <QStringBuilder>
#include <QString>
using namespace std;

class inventory
{
private:
    int     itemID;
    QString itemName;
    double  itemPrice;
    int     itemQuantity;
public:
    int    getItemID() const;
    const  QString& getItemName() const;
    double getItemPrice() const;
    int    getItemQuantity() const;

    void setItemID(int iID);
    void setItemName(const QString& iName);
    void setItemPrice(double iPrice);
    void setItemQuantity(int iQuan);

    inventory();
    inventory(const inventory& invent);
    inventory(int iID, const QString& iName, double iPrice, int iQuan);
    inventory(const QString& iName, double iPrice, int iQuan);
};

#endif // INVENTORY_H
