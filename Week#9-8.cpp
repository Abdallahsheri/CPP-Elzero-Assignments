#include <iostream>
using namespace std;

//Week#9-8

// Write Your Function Here

int plusandmultiply(int numbers[], int numssize)
{
	int SumEvenNums = 0;
	int MultiplyOddNums = 1;

	for (int i = 0; i < numssize; i++)
	{
		if (numbers[i] % 2 == 0)
		{
			SumEvenNums += numbers[i];
		}

		else
		{
			MultiplyOddNums *= numbers[i];
		}

	}


	return SumEvenNums + MultiplyOddNums;
}

int main()
{
	int numbers[] = { 10, 20, 3, 30, 5, 7, 40 };
	int numssize = size(numbers);
	cout << plusandmultiply(numbers, numssize) << "\n";
	// Even Numbers -> 10 + 20 + 30 + 40 = 100
	// Odd Numbers  -> 3 * 5 * 7 = 105
	// Total = 100 + 105 = 205
	return 0;
}
