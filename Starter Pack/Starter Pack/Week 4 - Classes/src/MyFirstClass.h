#pragma once
/*
My first c++ class
*/

class MyFirstClass 
{
private:
	//an integer property/attribute
	int iNumber;

public:
	//default constructer
	MyFirstClass();

	//overload constructer
	MyFirstClass(int iValue);

	//setter to set the valur for iNumber
	void setNumber(int iNewValue);

	//getter to retrive the value in iNumber
	int getNumber();
};