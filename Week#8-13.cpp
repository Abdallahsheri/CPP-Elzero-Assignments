#include <array>
#include <iostream>
#include <string.h>
#include <cmath>
using namespace std;
//Week#8-13
int main()
{
	for (int i = 30; i >=3; i-=3)
	{
		cout << i << endl;
	}
	cout << "=============================================" << endl;
	for (int i = 30; i >= 3; i -= 3)
	{
		if (i % 2 == 0)
		{
			continue;
		}

		cout << i << endl;
	}

	return 0;
}
