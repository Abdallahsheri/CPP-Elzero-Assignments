#include <iostream>
using namespace std;

//Week#9-4

// Your Function Here

int calculation(int Num1 = 100, int Num2 = 50, int Num3 = 150)
{
	return Num1 + Num2 + Num3;
}

int main()
{
	cout << calculation(50, 100, 150) << "\n"; // 300
	cout << calculation(100, 50) << "\n"; // 300
	cout << calculation(100) << "\n"; // 300
	return 0;
}
