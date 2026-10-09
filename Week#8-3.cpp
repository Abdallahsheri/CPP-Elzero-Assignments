#include <array>
#include <iostream>
#include <string.h>
using namespace std;
//Week#8-3
int main()
{
	int FirstNumber, SecondNumber;
	cout << "Please Enter The First Number : ";
	cin >> FirstNumber;

	cout << "Please Enter The Second Number : ";
	cin >> SecondNumber;
	int Temp = 0;
	
	if (FirstNumber > SecondNumber)
	{
		Temp = SecondNumber;
		SecondNumber = FirstNumber;
		FirstNumber = Temp;
	}
	
	for (int i = FirstNumber + 1; i <= SecondNumber - 1; i++)
	{
		if (i % 2 == 0)
		{
			continue;
		}
		cout << i << endl;
	}

	return 0;
}
