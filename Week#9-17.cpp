#include <iostream>
using namespace std;

//Week#9-17

// Write Your Function Here

int pricing(int MobilesCount, int UsedMobiles, int NewMobilesPrice, int t)
{
	int NewMobiles = MobilesCount - UsedMobiles;
	int TotalPriceForNewMobiles = NewMobiles * NewMobilesPrice;
	int TotalPriceForUSedMobiles = UsedMobiles * (NewMobilesPrice - 200);
	int TotalPriceBeforeTax = TotalPriceForNewMobiles + TotalPriceForUSedMobiles;

	//Tax

	float Tax = float(t) / 100;
	int TaxMoney = Tax * TotalPriceBeforeTax;

	int ToalPriceAfterTax = TotalPriceBeforeTax - TaxMoney;

	return ToalPriceAfterTax;

}

int main()
{
	cout << pricing(50, 10, 800, 20) << "\n"; // 30400
	return 0;
}
