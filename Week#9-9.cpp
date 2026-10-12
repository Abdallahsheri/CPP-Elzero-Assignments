#include <iostream>
using namespace std;

//Week#9-9

// Write Your Function Here

int sumall(int numbers[], int numsize, int noneed)
{
	int Result = 0;

	for (int i = 0; i < numsize; i++)
	{
		if (numbers[i] != noneed)
		{
			Result += numbers[i];
		}
	}

	return Result;
}

int main()
{
	int numbers[] = { 13, 20, 3, 30, 5, 7, 40, 13 }; // 20 + 3 + 30 + 5 + 7 + 40 = 105
	int numssize = size(numbers);
	int noneed = 13;
	cout << sumall(numbers, numssize, noneed) << "\n";
	return 0;
}
