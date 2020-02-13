// Header for database class

#ifndef DATABASE_H
#define DATABASE_H

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <cstdlib>
#include <bits/stdc++.h> 

namespace LCKMAT002{

    class database{
        
        private:

            struct StudentRecord {
                std::string Name;
                std::string Surname;
                std::string StudentNumber;
                std::string ClassRecord;
            }; 

            std::vector<StudentRecord> studentRecordDatabase;   

        public:
            
            bool add_student(const std::string & Name, const std::string & Surname, const std::string & StudentNumber, const std::string & ClassRecord);
            bool display_student(const std::string & StudentNumber);
            bool save_database(const std::string & filename );
            bool read_database(const std::string & filename );
            bool grade_student(const std::string & StudentNumber);
            bool check_is_not_duplicate(const std::string & StudentNumber);


    };  

    
    
}

#endif