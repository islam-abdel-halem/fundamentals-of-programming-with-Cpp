//  Create Full URL Function


#include <iostream>
using namespace std;

// Write Your Function Here
string createurl(string protocol,string name , string domain,bool subdomain=true){
	string url;
	if (subdomain) {
		url = protocol + "://www." + name + '.' + domain;
	}
	else {
		url = protocol + "://" + name + '.' + domain;
	}
	return url;

}

int main()
{
	cout << createurl("https", "elzero", "org") << "\n"; // https://www.elzero.org
	cout << createurl("https", "google", "com", false) << "\n"; // https://google.com
	cout << createurl("http", "learn", "net") << "\n"; // http://www.learn.net
	return 0;
}