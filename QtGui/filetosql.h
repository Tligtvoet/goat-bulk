#ifndef FILETOSQL_H
#define FILETOSQL_H

#include <QMessageBox>
#include <QSqlQuery>
#include <QSqlError>
#include <QSqlRecord>
#include <QVariant> //need for bindValue call.
#include <QDebug>

class fileToSQL
{
public:
    fileToSQL();
    void fileConvert();
};

#endif // FILETOSQL_H
