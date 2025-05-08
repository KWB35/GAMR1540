#include <iostream>
using namespace std;



int main()
{
	//Array Types
	// 
	//int aiIntegerArray[60]; // 60 Integers
	//char acCharArray[11]; // 11 Chars
	//float afFloatArray[16]; // 16 Floats
	//bool abBoolArray[3]; // 3 bools
	//unsigned short asShortArray[88]; // 88 Unsigned shorts


	//Basic array with iteration
	// 
	//const int iNumOfChars = 10;
	//char cChars[iNumOfChars];
	//for (int i = 0; i < iNumOfChars; i++)
	//{
		//cout << "Enter character number " << i + 1 << ": "; cin >> cChars[i];
	//}
	//cout << cChars << endl;


	//Multidimentional array
	// 
	//const int k_iMaxMultiplier = 12;
	//int aiTimesTables[k_iMaxMultiplier][k_iMaxMultiplier];
	//for (int i = 0; i < k_iMaxMultiplier; i++)
	//{
		//for (int j = 0; j < k_iMaxMultiplier; j++)
		//{
			//aiTimesTables[i][j] = (j + 1) * (i + 1);
			//cout << aiTimesTables[i][j] << " ";
		//}
		//cout << endl;
	//}

	//Vector Methods
	// 
	//size() Returns the current number of elements in the vector.
	//resize() Adds or removes elements until the vector is the correct size.
	//push_back() Add one element onto the back of the vector.
	//pop_back() Remove on element from the back of a vector
	//back() Returns the value of the element on the back of a vector
	//clear() Remove everything from the vector.
	//empty() Returns true if the vector is empty.

	//Initialise and Resize a vector
	// 
	//vector<int> viVector;
	//cout << "The size of viVector is " << viVector.size() << endl;
	//viVector.resize(50);
	//cout << "The size of viVector is " << viVector.size() << endl;
	//viVector.resize(10);
	//cout << "The size of viVector is " << viVector.size() << endl;



	//example array that prints the array shown below
	// 
	// 6x6 array
    //int iArr[6][6] = { 
		//{1,2,3,9,1,7},
		//{4,5,6,1,2,3},
		//{1,2,3,7,8,9},
		//{1,2,3,9,1,7},
		//{4,5,6,1,2,3},
		//{1,2,3,7,8,9}
	//};
	
	
	//int iRow = sizeof iArr / sizeof iArr[0];
	//int iCol = sizeof iArr[0] / sizeof iArr[0][0];

	// use nested for loops to print the content of the array
	//for (int i = 0; i < iRow; i++)
	//{
		//for (int j = 0; j < iCol; j++)
		//{
			//cout << "index " << i << j << " = " << iArr[i][j] << "\t";
		//}
		//cout << endl;
	//}


	//Set an array in different ways
	//
	//1st Path
	// 
	//int ai12XTables[12] = { 12, 24, 36, 48, 60, 72, 84, 96, 108, 120, 132, 144 };
	//for (int i = 0; i < 12; i++) 
	//{
		//cout << ai12XTables[i] << " ";
	//} 
	//cout << endl;
	//
	// 
	//2nd Path
	//
	//int ai12XTables[12];
	//int iCounter = 0;
	//for (int i = 0; i < 12; i++) {
		//iCounter = iCounter + 12;
		//ai12XTables[i] = iCounter;
		//cout << ai12XTables[i] << " ";
	//}
	//cout << endl;
	

int ai12XTables[12] = { 12, 24, 36, 48, 60, 72, 84, 96, 108, 120, 132, 144 };
cout << "Which multiple of twelve from 1 to 12 would you like to know?" << endl;
int iMultiple;
cin >> iMultiple;
iMultiple = iMultiple - 1;
cout << endl << ai12XTables[iMultiple] << endl;
	


	system("PAUSE");
    return 0;
}

