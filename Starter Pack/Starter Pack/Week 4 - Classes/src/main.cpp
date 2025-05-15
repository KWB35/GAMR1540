#include <iostream>
#include "MyFirstClass.h"

using namespace std;

int main() 
{
	//create am object of type MyFirstClass called my first object
	MyFirstClass myFirstObject;

	//set the value of myFirstObject property i.e. iNumber to 100
	myFirstObject.setNumber(100);

	//get the value of myFirstObject property and print out to console
	cout << "Value in iNumber is = " << myFirstObject.getNumber() << endl;
	return 0;
}