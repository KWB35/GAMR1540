#include <iostream>

using namespace std;




int main()
{
    int iParcelWeight = 25; //
    int iMaxCapacity = 1450;
    int iHeaviestVan = 0;
    int iNumVans = 0;
    int iBeltCapacity = 10;

    while (iBeltCapacity > 0) 
    {
        int iPayload = 0;
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

