// Header for UI class

#ifndef UI_H
#define UI_H

#include <iostream>
#include <string>

namespace LCKMAT002{
    
    const std::string SPLASHTEXT="\n1. Add student\n2. Read database\n3. Save database\n4. Display given student data\n5. Grade student\n...\nq: Quit\n";   
    const std::string SELECTIONINPUTPROMPT="\nSelection input: "; 

    void displaySplash();  
    void promptSelectInput();
    bool initiateQuery(int selection);

}


#endif