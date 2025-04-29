#include <iostream>

using namespace std;

int main()
{
	//for(int iCounter = 1; iCounter < 11; iCounter++) //sets parameters for the counter
	//{
		  //cout << iCounter << endl; //prints out the count
	//}

	//int iCounter; //declares variable
	//iCounter = 1; //initialises variable
	//while (iCounter < 11) //Tests the condition
	//{
		  //cout << iCounter << endl; //prints the count
		  //iCounter = iCounter + 1; //increments the counter
	//}

	//int count; //declares variable
	//count = 0; //initialises variable
	//while (count < 100) //tests the condition
	//{
		//cout << count << cout; //prints the count
		//count++; //incremenst the count
	//}

	//char iInput; //declares variable
	//do {
		  //cout << "Enter a letter: "; //prints to the screen
		  //cin >> iInput; //gets input
	//} while (iInput != 'x'); //test the condition
	//cout << "You entered x, goodbye" << endl; //next statement

	int iNumA = 25;
	while (24 < iNumA)
	{
		cout << "Please enter a number up to 24: " << endl;
		cin >> iNumA;
	}
	iNumA = iNumA + 1;


	int iNumB = 25;
	while (24 < iNumB)
	{
		cout << "Please enter a second number up to 24: " << endl;
		cin >> iNumB;
	}
	iNumB = iNumB + 1;

	for (int i = 1; i < iNumA; i++)
	{
		for (int j = 1; j < iNumB; j++)
		{
			int iNum = j * i;
			cout << iNum << "\t";
		}
		cout << endl;
	}


	return 0;

}
