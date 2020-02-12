#include "database.h"

 using namespace LCKMAT002;

void LCKMAT002::database::add_student(std::string Name, std::string Surname, std::string StudentNumber, std::string ClassRecord){

    StudentRecord newStudentRecord;
    newStudentRecord.Name = Name;
    newStudentRecord.Surname = Surname;
    newStudentRecord.StudentNumber = StudentNumber;
    newStudentRecord.ClassRecord = ClassRecord;

    StudentRecordDatabase.push_back(newStudentRecord);

};
