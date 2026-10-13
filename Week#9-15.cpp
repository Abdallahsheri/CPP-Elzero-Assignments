#include <iostream>
using namespace std;

//Week#9-15

// Write Your Functions Here

float avg(int Money[], int MoneySize)
{
	float TotalMoney = 0;

	for (int i = 0; i < MoneySize; i++)
	{
		TotalMoney += Money[i];
	}

	float Avg = TotalMoney / MoneySize;

	return Avg;

}

int main()
{
	int money[] = { 10, 20, 15, 25, 30, 35 };
	int monsize = size(money);
	cout << avg(money, monsize) << "\n"; // 22.5
	return 0;
}
