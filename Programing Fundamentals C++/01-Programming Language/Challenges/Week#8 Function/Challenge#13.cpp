//  Very Simple Greeting Function


#include <iostream>
using namespace std;

// Write Your Function Here
string greeting(string name, string title="empty") {
	string result;
	if (title=="Male") 
		result = "Hello Mr " + name;
	else if(title=="Female")
		result = "Hello Miss " + name;
	else if(title == "empty")
		result = "Hello " + name;
	
	return result;
	
}

int main()
{
	cout << greeting("Osama", "Male") << "\n"; // Hello Mr Osama
	cout << greeting("Eman", "Female") << "\n"; // Hello Miss Eman
	cout << greeting("Sameh") << "\n"; // Hello Sameh
	return 0;
}