#include "database.h"
#include "ui.h"

using namespace LCKMAT002;
using namespace std;

bool LCKMAT002::database::check_is_not_duplicate(std::string StudentNumber)
{
    for(std::size_t i=0; i<studentRecordDatabase.size(); ++i)
    {
        if (studentRecordDatabase[i].StudentNumber==StudentNumber) return false;        
    }
    return true;
};

bool LCKMAT002::database::add_student(std::string Name, std::string Surname, std::string StudentNumber, std::string ClassRecord)
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



