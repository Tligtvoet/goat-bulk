#ifndef SALESINFO_H
#define SALESINFO_H

#include "constants.h"
#include <QStringBuilder>
#include <QString>
using namespace std;

class salesInfo
{
private:
    QString itemDate;
    int     membID;
    QString itemName;
    double  itemCost;
    int     itemQuantity;

public:
    const  QString& getItemDate() const;
    int    getMembID() const;
    const  QString& getItemName() const;
    double getItemCost() const;
    int    getItemQuantity() const;

    void setItemDate(const QString& date);
    void setMembID(int memID);
    void setItemName(const QString& name);
    void setItemCost(double cost);
    void setItemQuantity(int quan);

    salesInfo();
    salesInfo(const salesInfo& salesInfo);
    salesInfo(const QString& date, int memID, const QString& name, double cost, int quan);
};

#endif // SALESINFO_H
