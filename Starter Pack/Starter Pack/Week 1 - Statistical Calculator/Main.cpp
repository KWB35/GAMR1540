#include <iostream>
#include "Main.h"

using namespace std;

int main()
{
	float f_num1 = 0; //initialises the variable as floats to allow for answers to have decimal places
	float f_num2 = 0;
	float f_num3 = 0;
	float f_num4 = 0;
	float f_num5 = 0;
	float f_num6 = 0;

	cout << "This will find the mean and standard deviation of a set of ordered numbers" << endl; //informs of the purpose of the code

	cout << "Enter the smallest of your chosen numbers" << endl; //asks for the number in order of smallest to largest
	cin >> f_num1;

	cout << "Enter the 2nd smallest of your chosen numbers" << endl;
	cin >> f_num2;
	
	cout << "Enter the 3rd smallest of your chosen numbers" << endl;
	cin >> f_num3;

	cout << "Enter the 3rd largest of your chosen numbers" << endl;
	cin >> f_num4;

	cout << "Enter the 2nd largest of your chosen numbers" << endl;
	cin >> f_num5;

	cout << "Enter the largest of your chosen numbers" << endl;
	cin >> f_num6;
	float f_mean = (f_num1 + f_num2 + f_num3 + f_num4 + f_num5 + f_num6) / 6; //Calculates the mean 

	cout << f_mean; cout << " is the mean value of this dataset" << endl << endl; //Displays the mean of the data set

	system("pause");//pauses the program temporarily until a key is pressed

	float f_sqNum1 = (f_num1 - f_mean) * (f_num1 - f_mean); //Gets the squared differences of the dataset
	float f_sqNum2 = (f_num2 - f_mean) * (f_num2 - f_mean);
	float f_sqNum3 = (f_num3 - f_mean) * (f_num3 - f_mean);
	float f_sqNum4 = (f_num4 - f_mean) * (f_num4 - f_mean);
	float f_sqNum5 = (f_num5 - f_mean) * (f_num5 - f_mean);
	float f_sqNum6 = (f_num6 - f_mean) * (f_num6 - f_mean);

	float f_squareDiffMean = (f_sqNum1 + f_sqNum2 + f_sqNum3 + f_sqNum4 + f_sqNum5 + f_sqNum6) / 6; //Calculates the mean of the squar differences
	
	float f_sDeviation = sqrt(f_squareDiffMean);//gets the standard deviation of the dataset
	cout << f_sDeviation;cout << " is the standard deviation of the dataset" <<endl << endl; //Displays the standard deviation of the dataset

	system("pause");//pauses the program temporarily until a key is pressed

	float f_Range = f_num6 - f_num1; //finds max range if values were entered in order 
	cout << f_Range; cout << " is the max range of the statset" << endl << endl; //Displays the range of the dataset

	system("pause");

	return 0;
}
