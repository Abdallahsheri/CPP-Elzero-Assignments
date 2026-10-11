#include <array>
#include <iostream>
#include <string.h>
#include <cmath>
using namespace std;
//Week#8-18
int main()
{
	for (int i = 0; i <= 1000; i += 100) // Do Not Edit This Line
	{
		if (i == 0 || i == 500)
		{
			continue;
		}
		cout << i << endl;
		if (i == 900)
		{
			break;
		}
	}

	// Output Needed
	//  100
	//	200
	//	300
	//	400
	//	600
	//	700
	//	800
	//	900
	return 0;
}
