#include <array>
#include <iostream>
#include <string.h>
#include <cmath>
using namespace std;
//Week#8-12
int main()
{
	int nums[] = { 10, 20, 14, 28, 40, 80, 15, 30 };
	int ArraySize = size(nums);

	for (int i = 0; i < ArraySize; i++)
	{
		if (nums[i] + nums[i] == nums[i+1])
		{
			cout << nums[i] << endl;
		}

		
	}

	// Output Needed
	//  10
	//	14
	//	40
	//	15
	return 0;
}
