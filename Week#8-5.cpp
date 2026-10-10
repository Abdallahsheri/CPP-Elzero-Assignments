#include <array>
#include <iostream>
#include <string.h>
using namespace std;
//Week#8-5
int main()
{

	//For Loop

	for (int i = 0; i <=27; i+=3)
	{
		cout << i << endl;
	}

	cout << "================================================" << endl;

	//While Loop
	int index = 0;
	while (index <= 27)
	{
		cout << index << endl;
		index += 3;
	}

	// Output Needed
	//0
	//	3
	//	6
	//	9
	//	12
	//	15
	//	18
	//	21
	//	24
	//	27
	return 0;
}
