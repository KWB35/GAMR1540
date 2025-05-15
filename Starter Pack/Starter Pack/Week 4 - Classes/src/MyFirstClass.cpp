#include "MyFirstClass.h"


MyFirstClass::MyFirstClass() 
{
	iNumber = 10;
}

MyFirstClass::MyFirstClass(int iValue) 
{
	iNumber = iValue;
}

void MyFirstClass::setNumber(int iNewValue) 
{
	iNumber = iNewValue;
}

int MyFirstClass::getNumber() 
{
	return iNumber;
}