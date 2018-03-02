#ifndef USER_H
#define USER_H

#include "constants.h"
#include <QStringBuilder>
#include <QString>

class User
{
private:
      int id;
      QString username;
      QString password;
      bool isAdmin;

public:
      const QString& getUsername() const;
      const QString& getPassword() const;
      bool isAdministrator() const;
      int getId() const;

      void setUsername(const QString& uname);
      void setPassword(const QString& pass);
      void setAdministrator(bool isAdministrator);
      void setId(int newId);

      User();
      User(const User& user);
      User(int dbId, const QString& uname, const QString& pass, bool isAdministrator);
      User(const QString& uname, const QString& pass, bool isAdministrator);

      bool operator ==(const User& user) const;
      bool operator !=(const User& user) const;
      User& operator =(const User& user);

      QString toString() const; //cannot return QString& const because I can't return stack variable.
};

const User NULL_USER;

#endif
