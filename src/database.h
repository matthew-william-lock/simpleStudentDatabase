/**
*.h file:
*/

#ifndef DATABASE_H
#define DATABASE_H

//any includes here

#include <iostream>
#include <string>
#include <vector>
namespace LCKMAT002{

    std::vector<StudentRecord> StudentRecordDatabase;

    struct StudentRecord {
        std::string Name;
        std::string Surname;
        std::string StudentNumber;
        std::string ClassRecord;
    }; 

    
}

#endif