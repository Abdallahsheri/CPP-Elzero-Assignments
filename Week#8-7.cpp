#include <array>
#include <iostream>
#include <string.h>
#include <cmath>
using namespace std;
//Week#8-7
int main()
{
	//For Loop

	for (int i = 2; i <=128; i*=2)
	{
		cout << i << endl;
		
	}
	cout << "============================================" << endl;
	//While Loop
	int i = 2;
	while (i<=128)
	{
		cout << i << endl;
		i *= 2;
	}



	// Output Needed
	//  2
	//	4
	//	8
	//	16
	//	32
	//	64
	//	128
	return 0;
}
