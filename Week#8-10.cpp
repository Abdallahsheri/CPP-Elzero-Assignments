#include <array>
#include <iostream>
#include <string.h>
#include <cmath>
using namespace std;
//Week#8-10
int main()
{
	// Friends Array
	string friends[] = { "Ahmed", "Mohamed", "ameer", "Ashraf", "Amany" };
	int ArraySize = size(friends);

	//For Loop 

	for (int i = 0; i < ArraySize; i++)
	{
		if (friends[i][0] == 'A')
		{
			cout << friends[i] << endl;
		}

	}
	
	cout << "==========================================" << endl;

	//While Loop
	int index = 0;
	while (index < ArraySize)
	{
		if (friends[index][0] == 'A')
		{
			cout << friends[index] << endl;
		}
		index++;
	}


	// Output Needed
	//  "Ahmed"
	//	"Ashraf"
	//	"Amany"
	return 0;
}
