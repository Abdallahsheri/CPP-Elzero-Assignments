#include <iostream>
using namespace std;
//Week#9-1
// Write Your Function Here

int calcspecial(int FirstNumber, int SecondNumber)
{
	if (FirstNumber == SecondNumber)
	{
		return FirstNumber + SecondNumber;
	}

	else if (FirstNumber > SecondNumber)
	{
		return FirstNumber - SecondNumber;
	}

	else
	{
		return SecondNumber - FirstNumber;
	}
}

int main()
{
	cout << calcspecial(40, 40) << "\n";    // First = Second -> 40 + 40 = 80
	cout << calcspecial(200, 50) << "\n";   // First > Second -> 200 - 50 = 150
	cout << calcspecial(100, 300) << "\n";  // First < Second -> 300 - 100 = 200
	return 0;
}
