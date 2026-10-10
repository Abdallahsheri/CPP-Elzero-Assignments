#include <array>
#include <iostream>
#include <string.h>
using namespace std;
//Week#8-4
int main()
{

	for (int i = 0; i < 20; i+=2)
	{
		if (i == 10 || i == 12)
		{
			continue;
		}
		cout << i << endl;
	}

	cout << "======================================================" << endl;

	int index = 0;

	while (index < 20)
	{
		if (index < 10 || index > 12)
		{
			cout << index << endl;
		}
		
		index+=2;
	}

	// Output Needed
	//  0
	//	2
	//	4
	//	6
	//	8
	//	14
	//	16
	//	18
	return 0;
}
