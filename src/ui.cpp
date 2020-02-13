#include "ui.h"
#include "database.h"

using namespace std;
using namespace LCKMAT002;

void LCKMAT002::displaySplash(){
    system("clear"); 
    cout << SPLASHTEXT;
};

void LCKMAT002::clearDisplay(){
    system("clear"); 
}

void LCKMAT002::promptSelectInput(){
    cout << SELECTIONINPUTPROMPT;
};

void LCKMAT002::promptNameInput(){
    cout << NAMEINPUTPROMPT;
};

void LCKMAT002::promptSurnameInput(){
    cout << SURNAMEINPUTPROMPT;
};

void LCKMAT002::promptStudentNoInput(){
    cout << STUDENTNOINPUTPROMPT;
};

void LCKMAT002::promptClassRecordInput(){
    cout << CLASSRECORDINPUTPROMPT;
};

bool LCKMAT002::initiateQuery(std::string selection){

    
    if (selection=="1") return true;
    else return false;
    
};
