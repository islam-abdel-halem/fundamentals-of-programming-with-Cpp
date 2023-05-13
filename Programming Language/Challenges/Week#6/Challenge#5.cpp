#include <iostream>
using namespace std;

int main()
{
	const int size = 5;
	const int size2 = 4;
	// Example 1
	int values[size] = { 100, 200, 600, 200, 100 };

	// Output
	if (values[0] == values[size - 1] && values[1] == values[size - 2])
		cout << "Array Is Palindrome\n";
	else
		cout << "Array Is Not Palindrome\n";

		// Example 2
		int values2[size2] = { 100, 200, 200, 100 };

	// Output
		if (values2[0] == values2[size2 - 1] && values2[1] == values2[size2 - 2])
			cout << "Array Is Palindrome\n";
		else
			cout << "Array Is Not Palindrome\n";

		// Example 3
		int values3[size] = { 100, 300, 600, 200, 100 };

	// Output
		if (values3[0] == values3[size - 1] && values3[1] == values3[size - 2])
			cout << "Array Is Palindrome\n";
		else
			cout << "Array Is Not Palindrome\n";
	return 0;
}