// Header for UI class

#ifndef UI_H
#define UI_H

#include <iostream>
#include <string>

namespace LCKMAT002{
    
    const std::string SPLASHTEXT="\n1. Add student\n2. Read database\n3. Save database\n4. Display given student data\n5. Grade student\n...\nq: Quit\n"; 

    const std::string SELECTIONINPUTPROMPT="\nEnter option: "; 
    const std::string NAMEINPUTPROMPT="1. Add student\n\nEnter student name: ";
    const std::string DATABASEFILENAMEINPUT="2. Read database\n\nEnter filename for database to be read from: ";
    const std::string FILENAMEINPUTPROMPT="3. Save database\n\nEnter filename for database to be saved to: ";  
    const std::string SURNAMEINPUTPROMPT="Enter student surname: "; 
    const std::string STUDENTNOINPUTPROMPT="Enter student number: "; 
    const std::string CLASSRECORDINPUTPROMPT="Enter student class record: "; 
    
    

    const std::string DUPLICATEERROR="-----------------------ERROR-----------------------\nA Student with this student number already exists.\n---------------------------------------------------\n\n"; 
    const std::string FILEOUTPUTEORR="-----------------------ERROR-----------------------\nA Somthing went wrong. Please try again.\n---------------------------------------------------\n\n"; 



    void displaySplash();  
    void clearDisplay();

    void promptSelectInput();
    void promptNameInput();
    void promptSurnameInput();
    void promptStudentNoInput();
    void promptClassRecordInput();
    void promptFilenameInput();
    void promptFilenameOutput();
    
    bool initiateQuery(std::string selection);

}


#endif