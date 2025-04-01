#include <iostream>

using namespace std;

int main()
{
	cout << "The size of type int is " << sizeof(int) << " bytes." << endl;//Using the same basic format and substituting the integer type we find the byte size of the integers
	cout << "The size of type char is " << sizeof(char) << " bytes." << endl;
	cout << "The size of type float is " << sizeof(float) << " bytes." << endl;
	cout << "The size of type double is " << sizeof(double) << " bytes." << endl;
	cout << "The size of type long is " << sizeof(long) << " bytes." << endl;
	cout << "The size of type bool is " << sizeof(bool) << " bytes." << endl;
	cout << "The size of type short is " << sizeof(short) << " bytes." << endl;


	system("pause");
	return 0;
}