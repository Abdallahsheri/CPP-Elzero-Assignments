#include <array>
#include <iostream>
#include <string.h>
#include <cmath>
using namespace std;
//Week#8-14
int main()
{
	int num = 2;
	while (num < 520) {
		// Your Code Here
		if (num == 2)
			num--;
		cout << num << endl;
		num = num * 2 + 2;
	}

	// Needed Output
	//  1
	//	4
	//	10
	//	22
	//	46
	//	94
	//	190
	//	382

	return 0;
}
