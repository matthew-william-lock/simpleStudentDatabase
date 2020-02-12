#include "ui.h"
#include "database.h"

using namespace LCKMAT002;
using namespace std;

void LCKMAT002::displaySplash(){
    system("clear"); 
    cout << SPLASHTEXT;
};

void LCKMAT002::promptSelectInput(){
    cout << SELECTIONINPUTPROMPT;
};

bool LCKMAT002::initiateQuery(int selection){

    
    switch(selection) {
      case 1:
        return true;
        break;

      case 2: 

        break;

      case 3: 
        break;

      case 4:

        break;

      case 5: 

        break;

      default: 
        return false;
        break;

   }
};
