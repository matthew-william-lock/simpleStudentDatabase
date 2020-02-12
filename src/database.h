// Header for database class

#ifndef DATABASE_H
#define DATABASE_H

#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>

namespace LCKMAT002{

    class database{
        
        private:

            struct StudentRecord {
                std::string Name;
                std::string Surname;
                std::string StudentNumber;
                std::string ClassRecord;
            }; 

            std::vector<StudentRecord> StudentRecordDatabase;   

        public:
            
            void add_student(std::string Name, std::string Surname, std::string StudentNumber, std::string ClassRecord);

    };  

    
    
}

#endif