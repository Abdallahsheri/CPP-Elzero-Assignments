#include <iostream>

using namespace std;

//Week#4-8

int main()
{
	int num = 10;
	cout << --num << " | " << num++ << " | " << ++num << "\n"; // 9 | 9 | 11
	cout << num << " | " << ++num << " | " << num << "\n"; // 11 | 12 | 12
	cout << --num << " | " << --num << " | " << --num << "\n"; // 11 | 10 | 9
}

/*

int num = 10;
cout << num << " | " << num << " | " << num << "\n"; // 9 | 9 | 11
cout << num << " | " << num << " | " << num << "\n"; // 11 | 12 | 12
cout << num << " | " << num << " | " << num << "\n"; // 11 | 10 | 9

*/
