#include "database.h"
#include "ui.h"

int main(void)
{

    using namespace LCKMAT002;
    using namespace std;

    database studentDatabase;
      
    for (;;)
    {
        int command;
        displaySplash();
        promptSelectInput();
        std::cin >> command;
        bool successfulQuery = initiateQuery(command);      

        while (!successfulQuery){
            cout<<"Please enter valid selection\n";
            promptSelectInput();
            std::cin >> command;
            successfulQuery = initiateQuery(command);
        }

    }
    
    return 0;

}
