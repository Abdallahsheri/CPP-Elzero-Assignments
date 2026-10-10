#include <array>
#include <iostream>
#include <string.h>
using namespace std;
//Week#8-6
int main()
{
	//For Loop
	int Result = 10;
	for (int i = 0; i < 4; i++)
	{
		cout << Result << endl;
		Result *= Result;
	}

	cout << "=============================================" << endl;

	//While Loop
	int i = 0;
	while (i < 4)
	{
		cout << Result << endl;
		Result *= Result;
		i++;
	}

	// Output Needed
	//10
	//	100
	//	10000
	//	100000000
	return 0;
}
