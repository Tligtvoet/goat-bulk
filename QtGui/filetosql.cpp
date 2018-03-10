#include "filetosql.h"
#include <fstream>
#include <iostream>

using namespace std;

fileToSQL::fileToSQL(){}

void fileToSQL::fileConvert(){
    QSqlQuery insertQuery;
    ifstream fin;
    string tempInput;
    char *tempDate, *tempItem;
    int tempId, tempQuantity, size;
    double tempCost;
    string dates[7] = {"day1.txt",
                       "day2.txt",
                       "day3.txt",
                       "day4.txt",
                       "day5.txt",
                       "day6.txt",
                       "day7.txt"};

    for(int i = 0; i < 7; ++i){


        bool error = false;

        fin.open(dates[i]);
        cout << "something";

        if(fin.is_open() != true){
            error = true;
            cout << error;
        }
        else{
            while(fin){
                cout << "working\n";


                //Date input
                getline(fin, tempInput);
                size = tempInput.length();
                tempDate = new char[size+1];
                strcpy(tempDate, tempInput.c_str());

                //ID input
                fin >> tempId;
                fin.ignore(10000, '\n');

                //Item input
                getline(fin, tempInput);
                size = tempInput.length();
                tempItem = new char[size+1];
                strcpy(tempItem, tempInput.c_str());

                //Cost input
                fin >> tempCost;
                fin.ignore(1000, ' ');

                //Quantity input
                fin >> tempQuantity;
                fin.ignore(1000, '\n');



                insertQuery.prepare("INSERT INTO SalesInfo (Date, ID, Item, Cost, Quantity) VALUES (:Date, :ID, :Item, :Cost, :Quantity)");
                insertQuery.bindValue(":Date", tempDate);
                insertQuery.bindValue(":ID", tempId);
                insertQuery.bindValue(":Item", tempItem);
                insertQuery.bindValue(":Cost", tempCost);
                insertQuery.bindValue(":Quantity", tempQuantity);

                tempDate = NULL;

            }

            fin.close();
        }

    }





}
