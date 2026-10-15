#include <iostream>
#include <vector>
using namespace std;

//Week#10-02


int main()
{

	vector<int> numbers = { 10, 20, 30, 40 };

	cout << "First Element Is : " << endl;

	cout << numbers.at(0) << endl;
	cout << numbers[0] << endl;
	cout << numbers.front() << endl;
	cout << *numbers.begin() << endl;
	
	cout << "==============================" << endl;
	
	cout << "Last Element Is : " << endl;
	
	cout << numbers.at(3) << endl;
	cout << numbers[3] << endl;
	cout << numbers.back() << endl;
	cout << *(numbers.end() - 1) << endl;



	return 0;
}
