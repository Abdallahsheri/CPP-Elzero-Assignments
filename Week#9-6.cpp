#include <iostream>
#include <cctype>
using namespace std;

//Week#9-6

// Write Your Function Here
string swapping(string Message)
{
	string Result;
	
	for (int i = 0; i < Message.length(); i++)
	{
		if (islower(Message[i]) && Message[i] != 'h')
		{
			Result += toupper(Message[i]);
		}

		else if (isupper(Message[i]) && Message[i] != 'H')
		{
			Result += tolower(Message[i]);
		}
		
		else
		{
			Result += Message[i];
		}
	}
	
	return Result;
}
int main()
{
	cout << swapping("hero Of THe PROgramming") << "\n"; // hERO oF tHE proGRAMMING
	return 0;
}
