#ifndef MEMBERMANAGER_H
#define MEMBERMANAGER_H

#include "members.h"
#include "dbmanager.h"
#include <QMessageBox>
#include <QSqlQuery>
#include <QSqlError>
#include <QSqlRecord>
#include <QVariant> //need for bindValue call.
#include <QDebug>

class memberManager
{
public:
    static memberManager& instance();

    memberManager(memberManager const&) = delete;  // Don't forget to disable copy
    void operator=(memberManager const&) = delete; // Don't forget to disable copy

    bool createMember(const members& member) const;
    bool deleteMember(int memberId) const;

private:
    memberManager();  // forbid creation outside class
    ~memberManager(); // forbid to delete instance outside

};

#endif // MEMBERMANAGER_H
