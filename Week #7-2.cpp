#include <iostream>
using namespace std;
//Week #7-2
int main()
{
    // Example 1
    int check = 25;
    int nums[]{ 40, 20, 30, 70, 100 };

    // Ouput
    //"{40} + {70} = 110"

    if (nums[0] > check)
    {
        cout << "{" << nums[0] << "}";
        cout << " + " << "{" << nums[3] << "}";
        cout << " = " << nums[0] + nums[3];
    }

    if (nums[1] > check)
    {
        cout << "{" << nums[1] << "}";
        cout << " + " << "{" << nums[3] << "}";
        cout << " = " << nums[1] + nums[3];
    }
   
    if (nums[2] > check)
    {
        cout << "{" << nums[2] << "}";
        cout << " + " << "{" << nums[3] << "}";
        cout << " = " << nums[2] + nums[3];
    }

    return 0;
}
