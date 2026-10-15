#include <iostream>
#include <vector>
using namespace std;

//Week#10-01


int main()
{

	vector <int> Numbers = {100,200,300,400};

	for (int i = 0; i < Numbers.size(); i++)
	{
		cout << Numbers[i] << endl;
	}

	Numbers.push_back(500);
	
	cout << "The First Element Is : " << Numbers.front() << endl;
	cout << "The Last Element Is : " << Numbers.back() << endl;
	//// Output
	//100
	//	200
	//	300
	//	400
	//	"First Element Is: 100"
	//	"Last Element Is: 500"
	return 0;
}
