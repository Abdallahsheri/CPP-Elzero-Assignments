#include <array>
#include <iostream>
#include <string.h>
#include <cmath>
using namespace std;
//Week#8-16
int main()
{
	int index = 10;
	int jump = 2;

	for (;;)
	{
		cout << index << endl;
		index -= jump;

		if (index == jump)
		{
			break;
		}

	}

	// Output Needed
	// 10
	//	8
	//	6
	//	4
	return 0;
}
