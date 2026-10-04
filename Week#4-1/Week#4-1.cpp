#include <iostream>

using namespace std;

//Week#4-1

int main()
{
	int num = 3;
	cout << num + num << "\n";                 // 6
	cout << num * num - num << "\n";           // 6
	cout << (num * num) - num << "\n";         // 6
	cout << (num + num + num) - num << "\n";   // 6
	cout << (num - num) + (num + num) << "\n"; // 6
	cout << (num + num) / (num / num) << "\n"; // 6
	cout << (num / num) * (num + num) << "\n"; // 6
}
