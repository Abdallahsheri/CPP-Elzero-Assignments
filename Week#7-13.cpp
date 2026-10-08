#include <array>
#include <iostream>
#include <string.h>
using namespace std;
//Week#7-13
int main()
{
	string fName = "Elzero ";
	string mName = "Web ";
	string lName = "School";

	//  Output Needed
	//  Elzero Web School
	//	Elzero Web School
	//	Elzero Web School

	cout << fName + mName + lName << endl;
	cout << fName << mName << lName << endl;
	cout << fName.append(mName).append(lName) << endl;
	return 0;
}
