#include "database.h"
#include "ui.h"

using namespace LCKMAT002;
using namespace std;

bool LCKMAT002::database::check_is_not_duplicate(const std::string & StudentNumber)
{
    for(std::size_t i=0; i<studentRecordDatabase.size(); ++i)
    {
        if (studentRecordDatabase.at(i).StudentNumber==StudentNumber) return false;        
    }
    return true;
};

bool LCKMAT002::database::save_database(const std::string & filename)
{

    clearDisplay();

    std::ofstream out(filename);
    if (!out)
    {
        cout<<FILEOUTPUTEORR;
        return false; 
    }
    for(std::size_t i=0; i<studentRecordDatabase.size(); ++i)
    {
        out<<studentRecordDatabase.at(i).Name<<","<<studentRecordDatabase.at(i).Surname<<","<<studentRecordDatabase.at(i).StudentNumber<<","<<studentRecordDatabase.at(i).ClassRecord<<"\n";             
    }
    out.close();
    return true;
};

bool LCKMAT002::database::read_database(const std::string & filename)
{

    clearDisplay();

    studentRecordDatabase.clear();

    std::ifstream in(filename);
    if (!in)
    {
        cout<<FILEOUTPUTEORR;
        return false; 
    }

    std::string line;
    while (std::getline(in, line)) 
    {

        StudentRecord newRecord;

        std::string data;
        std::istringstream token(line);
        while (token)
        {
            std::getline(token,newRecord.Name,',');
            std::getline(token,newRecord.Surname,',');
            std::getline(token,newRecord.StudentNumber,',');
            std::getline(token,newRecord.ClassRecord,',');
        }        
        studentRecordDatabase.push_back({newRecord.Name,newRecord.Surname,newRecord.StudentNumber,newRecord.ClassRecord});       
    }

    in.close();
    return true;
};

bool LCKMAT002::database::add_student(const std::string & Name, const std::string & Surname, const std::string & StudentNumber, const std::string & ClassRecord)
{
    clearDisplay(); // Clear UI

    if (check_is_not_duplicate(StudentNumber))
    {
        studentRecordDatabase.push_back({Name,Surname,StudentNumber,ClassRecord});
        return true;
    }
    else
    {
        cout<<DUPLICATEERROR;
    }    
    return false;

};

int LCKMAT002::database::get_size()
{
    studentRecordDatabase.size();
};



