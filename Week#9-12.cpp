#include <iostream>
using namespace std;

//Week#9-12

// Write Your Function Here

string createurl(string Protocol, string DomainName, string Hosting, bool isContainWWW = true)
{
	string WebsiteURL = "";

	if (isContainWWW)
	{
		WebsiteURL = Protocol + "://" + "www." + DomainName + "." + Hosting;
	}

	else
	{
		WebsiteURL = Protocol + "://" + DomainName + "." + Hosting;
	}

	return WebsiteURL;
}

int main()
{
	cout << createurl("https", "elzero", "org") << "\n"; // https://www.elzero.org
	cout << createurl("https", "google", "com", false) << "\n"; // https://google.com
	cout << createurl("http", "learn", "net") << "\n"; // http://www.learn.net
	return 0;
}
