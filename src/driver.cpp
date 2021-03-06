#include "database.h"
#include "ui.h"

using namespace LCKMAT002;
using namespace std;

database studentDatabase;

int add_student(){

    using namespace std;

    std::string name;
    std::string surname;
    std::string studentNo;
    std::string classRecord;

    promptNameInput();
    cin>>name;

    promptSurnameInput();
    cin>>surname;

    promptStudentNoInput();
    cin>>studentNo;

    promptClassRecordInput();
    cin.ignore();
    std::getline(cin,classRecord);

    if (studentDatabase.add_student(name,surname,studentNo,classRecord))
    {
        return true;
    }   
    return false;

}

int display_student_data(){

    using namespace std;
    std::string studentNo;

    promptStudentIdentificationInput();
    cin>>studentNo;

    if (studentDatabase.display_student(studentNo))
    {
        string temp;
        cout<<"...\nType anything and hit enter to continue ";
        std::cin>>temp;
        return true;
    }  
    return false;
}

int display_student_grades(){

    using namespace std;
    std::string studentNo;

    promptStudentIdentificationForGradesInput();
    cin>>studentNo;

    if (studentDatabase.grade_student(studentNo))
    {
        string temp;
        cout<<"...\nType anything and hit enter to continue ";
        std::cin>>temp;
        return true;
    }  
    return false;
}

int save_the_database(){

    using namespace std;

    std::string filename;

    promptFilenameInput();
    cin>>filename;


    if (studentDatabase.save_database(filename))
    {
        return true;
    }   
    return false;

}

int open_the_database(){

    using namespace std;

    std::string filename;

    promptFilenameOutput();
    cin>>filename;


    if (studentDatabase.read_database(filename))
    {
        return true;
    }   
    return false;

}

int main(void)
{ 

    using namespace std;

    for (;;)
    {
        std::string selection;
        
        displaySplash();
        promptSelectInput();
        std::cin >> selection;
        bool successfulQuery = initiateQuery(selection);      

        while (!successfulQuery){
            cout<<"Please enter valid selection\n";
            promptSelectInput();
            std::cin >> selection;
            successfulQuery = initiateQuery(selection);
        };

        clearDisplay();

        if (selection =="1")
        {
            bool result = add_student();
            while (!result)
            {
                result = add_student();
            }            
        }
        else if (selection=="2")
        {
            bool result = open_the_database();
            while (!result)
            {
                result = open_the_database();
            }               
        }
        else if (selection=="3")
        {
            bool result = save_the_database();
            while (!result)
            {
                result = save_the_database();
            }               
        }
        else if (selection=="4")
        {
            bool result = display_student_data();
            while (!result)
            {
                result = display_student_data();
            }               
        }
        else if (selection=="5")
        {
            bool result = display_student_grades();
            while (!result)
            {
                result = display_student_grades();
            }               
        }

        else if(selection=="q") exit(0);
        
       
        

    }
    
    return 0;

}

