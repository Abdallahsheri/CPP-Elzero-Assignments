#include <array>
#include <iostream>
using namespace std;

//Week#7-9

int main()
{
	int nums[] = { 10, 20, 30, 40, 20, 50 };

	// Method 1
	//6

	cout << sizeof(nums) / sizeof(int) << endl;

	// Method 2
	//6

	cout << size(nums) << endl;

	// Method 3
	//6

	cout << end(nums) - begin(nums) << endl;

	return 0;
}
