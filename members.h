#ifndef MEMBERS_H
#define MEMBERS_H

#include "constants.h"
#include <QStringBuilder>
#include <QString>
using namespace std;

class members
{
private:
    QString memberName;
    int     memberID;
    QString memberStatus;
    QString memberExpDate;


public:
    const QString& getName() const;
    int   getID() const;
    const QString& getStatus() const;
    const QString& getExpDate() const;

    void setName(const QString& name);
    void setID(int newID);
    void setStatus(const QString& status);
    void setExpDate(const QString& expDate);

    members();
    members(const members& member);
    members(int id, const QString& name, const QString& memStatus, const QString& expDate);
    members(const QString& name, const QString& memStatus, const QString& expDate);
};

#endif // MEMBERS_H
