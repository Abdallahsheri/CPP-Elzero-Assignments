#include <array>
#include <iostream>
#include <string.h>
#include <cmath>
using namespace std;
//Week#8-11
int main()
{
	// Friends Array
	string friends[] = { "Ahmed", "Osama", "Ameer" };
	int ArraySize = size(friends);

	for (int i = 0; i < ArraySize; i++)
	{
		cout << "==========" << endl;
		cout << "= " << friends[i] << " =" << endl;
		cout << "==================" << endl;
		cout << "== ";
		for (int j = 0; j < size(friends[i]); j++)
		{
			cout << friends[i][j];
			if (j != size(friends[i])-1)
			{
				cout << ", ";
			}
		}
		cout << " ==" << endl;
	}

	// Output Needed
	//======== =
	//	= Ahmed =
	//	==================
	//	== A, h, m, e, d =
	//	==================

	//	======== =
	//	= Osama =
	//	==================
	//	== O, s, a, m, a =
	//	==================

	//	======== =
	//	= Ameer =
	//	==================
	//	== A, m, e, e, r =
	//	==================
	return 0;
}
