#include <iostream>
using namespace std;

//Week#9-16

// Write Your Function Here

int books(int SmallBooks, int MidBooks, int BigBooks, int Space)
{
	int TotalSpaceForBooks = (SmallBooks * 2) + (MidBooks * 4) + (BigBooks * 6);
	int AvliableSpace = Space * 20;

	if (TotalSpaceForBooks < AvliableSpace)
	{
		return AvliableSpace - TotalSpaceForBooks;
	}

	return 0;

}

int main()
{
	cout << books(10, 4, 3, 4) << "\n"; // 26
	cout << books(10, 4, 3, 2) << "\n"; // 0
	return 0;
}
