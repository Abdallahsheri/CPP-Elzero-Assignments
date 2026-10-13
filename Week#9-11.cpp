#include <iostream>
using namespace std;

//Week#9-11

// Write Your Function Here

int firstnegative(int numbers[], int numssize)
{
	int GreatestNegative = -10;

	for (int i = 0; i < numssize; i++)
	{
		if (numbers[i] < 0 && numbers[i] > GreatestNegative)
		{
			GreatestNegative = numbers[i];
		}
	}

	return GreatestNegative;

}

int main()
{
	int numbers[] = { -10, -20, 15, 100, 10, 5, -50, 0, -5, -10 }; // -5
	int numssize = size(numbers);
	cout << firstnegative(numbers, numssize) << "\n";
	return 0;
}
