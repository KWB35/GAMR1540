#include <iostream>

using namespace std;

int iParcelWeight = 1; //to be changed to a user input 
int iMaxCapacity = 5; //to be changed to a user input
int iHeaviestVan = 0;
int iNumVans = 0; //to be changed to a user input
int iBeltCapacity = 10; //to be changed to a user input


int main()
{
 
    while (iBeltCapacity > 0) 
    {
        int iPayload = 0; //to be changed to a user input
        while (iPayload + iParcelWeight <= iMaxCapacity) 
        {
            iPayload = iPayload + iParcelWeight;

        }

        iNumVans = iNumVans + 1;

        if (iPayload > iHeaviestVan) 
        {
            iHeaviestVan = iPayload;
        }

        
       
        cout << iNumVans << endl;
        cout << iHeaviestVan << endl;
        
    }


    return 0;
}

