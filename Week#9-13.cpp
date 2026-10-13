#include <iostream>
using namespace std;

//Week#9-13

// Write Your Function Here

string greeting(string Name, string Gender = "Unknown")
{
	string Greeting = "";

	if (Gender == "Male")
	{
		Greeting = "Hello Mr " + Name;
	}
	
	else if (Gender == "Female")
	{
		Greeting = "Hello Miss " + Name;
	}

	else
	{
		Greeting = "Hello " + Name;
	}

	return Greeting;
}

int main()
{
	cout << greeting("Osama", "Male") << "\n"; // Hello Mr Osama
	cout << greeting("Eman", "Female") << "\n"; // Hello Miss Eman
	cout << greeting("Sameh") << "\n"; // Hello Sameh
	return 0;
}
