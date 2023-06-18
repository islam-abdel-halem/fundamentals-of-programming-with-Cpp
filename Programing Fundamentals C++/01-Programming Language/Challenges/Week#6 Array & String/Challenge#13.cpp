#include <string.h>
#include <iostream>
using namespace std;

int main()
{
	string fName = "Elzero ";
	string mName = "Web ";
	string lName = "School";

	// Output Needed
	cout << fName << mName << lName<<endl;
	cout << fName + mName + lName<<endl;
	cout << fName.append(mName).append(lName) << endl;
	return 0;
}