#include <iostream>
#include <string>

using namespace std;


int main()
{
    string sUserInput;
    
    cout << "Please enter your chosen phrase." << endl;
    cin >> sUserInput;
    size_t foundHyphen = sUserInput.find("-");
    sUserInput.replace(foundHyphen,1," ");//replaces found dashes with a space

    size_t foundpunctuation = sUserInput.find("!" && ";" && "," && "." && "/" && "?" && ")" && "(" && "[" && "]" && "{" && "}" && "`" && ":");
    sUserInput.replace(foundpunctuation, 1, " ");
     


    cout << sUserInput << endl;

    system("pause");
    
}
