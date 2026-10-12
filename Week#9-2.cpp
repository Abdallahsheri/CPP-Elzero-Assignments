#include <iostream>
using namespace std;
//Week#9-2

// Write Your Function Here

float money(float Salary, int Days)
{
    int Weeks = Days / 7;
    int Holidays = Weeks * 2;
    int ActiveDays = Days - Holidays;
    return Salary / ActiveDays;
}
int main()
{
    /*
      Hints
      21 Days Has 3 "Weeks"
      Every "Week" You Have 2 Holidays.
      Total = 3 * 2 = 6 Holidays From 21 Days
    */
    cout << money(2015, 21) << "\n"; // 134.333
    cout << money(4500, 40) << "\n"; // 150
    return 0;
}
