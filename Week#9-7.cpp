#include <iostream>
using namespace std;

//Week#9-7

// Write Your Function Here

 int beforeresult(int MainNumber, int NumbersBefore)
{
	 int Result = 0;
	 
	 for (int i = 0; i <= NumbersBefore; i++)
	 {
		 Result += MainNumber;
		 MainNumber--;
	 }

	 return Result;
}

int main()
{
	cout << beforeresult(10, 5) << "\n"; // 10 + 9 + 8 + 7 + 6 + 5 = 45
	// Main Number [10]
	// Numbers Before [9 + 8 + 7 + 6 + 5] <- 5 Numbers
	cout << beforeresult(15, 3) << "\n"; // 15 + 14 + 13 + 12 = 54
	// Main Number [1015
	// Numbers Before [14 + 13 + 12] <- 3 Numbers
	return 0;
}
