#include <array>
#include <iostream>
#include <string.h>
#include <cmath>
using namespace std;
//Week#8-17
int main()
{
	for (int i = 1; i < 103; i++)
	{
		if (i <= 20 || i >= 100)
		{
	       if (i < 10)
			{
				cout << "00" << i << endl;
			}
			else if (i >= 10 && i < 100)
			{
				cout << "0" << i << endl;
			}
			else
			{
				cout << i << endl;
			}
		}
		
	}
	return 0;
}
