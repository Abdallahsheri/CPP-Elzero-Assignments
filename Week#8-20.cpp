#include <array>
#include <iostream>
#include <string.h>
#include <cmath>
using namespace std;
//Week#8-20
int main()
{
	string names[] = { "Osama", "Ahmed", "Mahmoud", "Hagar", "Eman", "Salwa" };
	int ArraySize = size(names);
	
	for (int i = 0; i < ArraySize; i++)
	{
		if (size(names[i]) == 5)
		{
			cout << names[i] << endl;
		}
	}

	// Output Needed
	//"Osama"
	//	"Ahmed"
	//	"Hagar"
	//	"Salwa"

	return 0;
}
