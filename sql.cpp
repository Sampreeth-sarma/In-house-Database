//
// Created by uday on 3/25/2018.
//

#include "sql.h"
#include "string.h"
#include "string"
using namespace std;
void createTable(){
    struct tableDetails tableDetailsStr;
    tableDetailsStr.tname = tablename;
    tableDetailsStr.tcolumn = columns;
    tableDetailsStr.tkey = p_key;
    tableDetailsStr.rsize = getRecordSize();
    tableDetailsStr.tsize = 0;
    tableDetailsStr.records = 0;
}
int getRecordSize(){
    cout<<"in getRecordSize()";
    string columnsTemp = columns;
    size_t commaInst = columnsTemp.find(",");
    if(commaInst==-1){
         cout<<"in INT";
        if(columnsTemp.find("INT")>=0){
            return 4;
        }
        else if(columnsTemp.find("CHAR")>=0){
            cout<<"in CHAR";
            string charLength = columnsTemp.substr(columnsTemp.find("(")+1,(columnsTemp.find(")")-columnsTemp.find("(")-1));
             size_t rsize = stoi(charLength);
             cout<<rsize;
            return rsize;
        }
    }

}