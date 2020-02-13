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
        cout<<FILENOUTFOUNDOUTPUTEORR;
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

bool LCKMAT002::database::display_student(const std::string & StudentNumber){

    clearDisplay(); // Clear UI

    for(std::size_t i=0; i<studentRecordDatabase.size(); ++i)
    {
        if (studentRecordDatabase.at(i).StudentNumber==StudentNumber) 
        {
            cout<<"Student name: \t\t"<<studentRecordDatabase.at(i).Name<<"\n";
            cout<<"Student surname: \t"<<studentRecordDatabase.at(i).Surname<<"\n";
            cout<<"Student number: \t"<<studentRecordDatabase.at(i).StudentNumber<<"\n";
            cout<<"Class record: \t\t"<<studentRecordDatabase.at(i).ClassRecord<<"\n";

            return true;        
        }        
    }
    cout<<NOMATCHERROR;
    return false;

};

bool LCKMAT002::database::grade_student(const std::string & StudentNumber){

    clearDisplay(); // Clear UI

    for(std::size_t i=0; i<studentRecordDatabase.size(); ++i)
    {
        if (studentRecordDatabase.at(i).StudentNumber==StudentNumber) 
        {
            string classRecord =studentRecordDatabase.at(i).ClassRecord;
            cout<<"Class record: \t\t"<<classRecord<<"\n";

            if (classRecord.find(" "))
            {
                float total=0;
                int counter=0;

                std::istringstream token(classRecord);            
                while (token)
                {
                    std::string grade;
                    std::getline(token,grade,' ');
                    if (grade!="")
                    {
                        float val = std::stof(grade);
                        counter++;
                        total+=val; 
                    }
                                         
                }
                float average = total/counter;
                cout<<"Average mark: \t\t"<<average<<"\n";
                return true;  
            }
            else{
                cout<<"Average mark: \t\t"<<classRecord<<"\n";
            }
            

                 
        }   
    }
    cout<<NOMATCHERROR;
    return false;

};



