#include <iostream>

using namespace std;

//Week#6-1

int main()
{
	
	int Year;
	cout << "Please Enter A Year : " << endl;
	cin >> Year;
	

	switch (Year)
	{
	case 1982:
		cout << "My Birth Day" << endl;
		break;
	case 1989:
		cout << "My First Work" << endl;
	case 1995:
		cout << "Windows 95" << endl;
		break;
	case 2000:
		cout << "Windows Millennium" << endl;
		break;
	case 2002:
		cout << "Created My vBulletin Forum" << endl;
		break;
	default:
		cout << "No Events in This Year";
	}
	
	/*
  1982 => "My Birth Day"
  1989 => "My First Work"
  1995 => "Windows 95"
  2000 => "Windows Millennium"
  2002 => "Created My vBulletin Forum"
  Any Other Year => "No Events in This Year"
*/
}

