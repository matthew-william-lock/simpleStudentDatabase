#include "ui.h"
#include "database.h"

using namespace std;
using namespace LCKMAT002;


void LCKMAT002::clearDisplay(){
    system("clear"); 
}

void LCKMAT002::displaySplash(){
    clearDisplay();
    cout << SPLASHTEXT;
};


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

void LCKMAT002::promptFilenameInput(){
    cout << FILENAMEINPUTPROMPT;
};

void LCKMAT002::promptFilenameOutput(){
    cout << DATABASEFILENAMEINPUT;
};

void LCKMAT002::promptStudentIdentificationInput(){
    cout << STUDENTIDENTIFICATIONINPUTPROMPT;
};

bool LCKMAT002::initiateQuery(std::string selection){

    
    if (selection=="1" || selection=="2"|| selection=="3"|| selection=="4"|| selection=="5") return true;
    else return false;
    
};
