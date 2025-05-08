#include <iostream>
using namespace std;

int main()
{
	int aiTimesTableGrid[12][12]; ///sets an array at the 12x12 size
	for (int i = 0; i < 12; i++) 
	{
		cout << "|   ";//buffer to help with the readability abd user experince //still needs tweaks
		for (int j = 0; j < 12; j++) //nested loop to make it loop 12 times for this section for every single loop of the out loop
		{
			aiTimesTableGrid[i][j] = (j + 1) * (i + 1);//multiplies to find teh correct vaue for each location in the grid
			cout << aiTimesTableGrid[i][j] << "   |   ";//prints the grid with a buffer after each digit to increase its readability
			
		}
		cout << endl;
	}
	system("pause");
	return 0;
}

