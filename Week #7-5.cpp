#include <iostream>
using namespace std;
//Week #7-5
int main()
{
    // Example 1
    int vals[] = { 100, 200, 600, 200, 100 };

    // Output
    //"Array Is Palindrome"

    if (vals[0] == vals[sizeof(vals) / sizeof(int) - 1] && vals[1] == vals[sizeof(vals) / sizeof(int) - 2])
    {
        cout << "Array Is Palindrome" << endl;
    }
    else
    {
        cout << "Array Is Not Palindrome" << endl;
    }

    return 0;
}
