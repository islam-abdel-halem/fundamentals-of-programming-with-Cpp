//  The Power Of A Number

#include <iostream>
#include <cmath>
using namespace std;

// Write Your Function Here
void thepower(int base, int power) {
	// The first way
	/*cout<<pow(base,power);*/

	//The second way
	int result = 1;
	for (int i = 0; i < power; i++) {
		result *= base;
	}
	cout << result;
}

int main()
{
	thepower(2, 5); // 32
	return 0;
}