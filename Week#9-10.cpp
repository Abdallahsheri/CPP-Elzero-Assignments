#include <iostream>
using namespace std;

//Week#9-10

// Write Your Function Here

int minpositive(int numbers[], int numssize)
{
	int Smallest = 50;

	for (int i = 0; i < numssize; i++)
	{
		if (numbers[i] > 0 && numbers[i] < Smallest)
		{
			Smallest = numbers[i];
		}
	}
	return Smallest;
}

int main()
{
	int numbers[] = { -10, -20, 15, 100, 10, 5, -50, 0 }; // 5
	int numssize = size(numbers);
	cout << minpositive(numbers, numssize) << "\n";
	return 0;
}
