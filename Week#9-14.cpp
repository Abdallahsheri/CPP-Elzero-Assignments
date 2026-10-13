#include <iostream>
using namespace std;

//Week#9-14

// Write Your Function Here

int calculate(int Num1, int Num2, string Op = "a")
{
	if (Op == "a" || Op == "add")
	{
		return Num1 + Num2;
	}

	else if (Op == "s" || Op == "subtract")
	{
		return Num1 - Num2;
	}

	else if (Op == "m" || Op == "multiply")
	{
		return Num1 * Num2;
	}

	else
	{
		return 0;
	}

}

int main()
{
	cout << calculate(10, 20) << "\n"; // 30
	cout << calculate(10, 20, "a") << "\n"; // 30
	cout << calculate(10, 20, "s") << "\n"; // -10
	cout << calculate(10, 20, "subtract") << "\n"; // -10
	cout << calculate(10, 20, "multiply") << "\n"; // 200
	cout << calculate(10, 20, "m") << "\n"; // 200
	cout << calculate(10, 20, "Invalid") << "\n"; // 0
	return 0;
}
