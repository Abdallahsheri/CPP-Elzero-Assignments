#include <iostream>
#include <cmath>
using namespace std;

//Week#9-5

// Write Your Function Here
void thepower(int Base, int Power)
{
	//Solution 1

	cout << pow(Base, Power) << endl;

	//Solution2

	int Result = 1;
	for (int i = Base; i <= Power+1; i++)
	{
		Result *= Base;
	}
	cout << Result << endl;
}
int main()
{
	thepower(2, 5); // 32
	return 0;
}
