#include <array>
#include <iostream>
#include <string.h>
#include <cmath>
using namespace std;
//Week#8-9
int main()
{
	// Friends Array
	string friends[] = { "Ahmed", "Mohamed", "Sayed", "Gamal" };
	int ArraySize = size(friends);
	
	//For Loop

	for (int i = 0; i < ArraySize; i++)
	{
		if (i < 1 || i > 2) continue;

		cout << friends[i] << endl;
	}
	cout << "=======================================" << endl;
	int index = 0;
	while (index < ArraySize)
	{
		if (index >= 1 && index <= 2)
		{
			cout << friends[index] << endl;
		}
		index++;
	}

	// Output Needed
	//"Mohamed"
	//"Sayed"
	return 0;
}
