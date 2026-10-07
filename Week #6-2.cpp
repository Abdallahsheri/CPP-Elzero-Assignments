#include <iostream>
using namespace std;
//Week #6-2
int main()
{
    int day;
    cin >> day;

    switch (day)
    {
    case 1:
    case 2:
    case 3:
        cout << day << " Shop Is Opened" << endl;
        break;
    case 4:
    case 5:
        cout << day << " Shop Is Closed" << endl;
        break;
    default:cout << "Day Is Not Valid";
        
    }

    return 0;
}
