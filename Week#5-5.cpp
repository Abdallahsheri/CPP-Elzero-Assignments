#include <iostream>

using namespace std;

//Week#5-5

int main()
{
    int by = 82; // by => Birth Year
    int s = 500; // s => Salary
    if (by > 80)
    {
        if (s < 600)
            cout << "Ok\n";
        else
            cout << "High\n";
    }
    else
    {
        cout << "Not Ok\n";
    }

    //Ternary Operator...(Short Hand If)

    (by > 80) ? (s < 60) ? cout << "Ok\n" : cout << "High\n" : cout << "Not Ok\n";

}

