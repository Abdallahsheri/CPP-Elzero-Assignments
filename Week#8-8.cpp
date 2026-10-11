#include <array>
#include <iostream>
#include <string.h>
#include <cmath>
using namespace std;
//Week#8-8
int main()
{
	//For Loop

	for (int i = 2; i <= 126; i = i * 2 + 2)
	{
		cout << i << endl;
	}

	cout << "===========================================" << endl;

	int index = 2;
	while (index <=126)
	{
		cout << index << endl;
		index = index * 2 + 2;
	}
	// Output Needed
	//  2
	//	6
	//	14
	//	30
	//	62
	//	126
	return 0;
}
