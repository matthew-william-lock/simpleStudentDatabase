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
    cin>>classRecord;

    if (studentDatabase.add_student(name,surname,studentNo,classRecord))
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
       
        

    }
    
    return 0;

}

