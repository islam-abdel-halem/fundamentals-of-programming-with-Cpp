//  Count With Many Methods

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	vector <int> numbers = { 10, 20, 10, 40, 50, 60, 10, 80 };
	int check = 10;
	int countone = 0;
	int counttwo = 0;

	// Write Method One
	for (int i = 0; i < numbers.size(); i++) {
		if (numbers.at(i) == check)
			countone++;
	}
	// Write Method Two
	for(int x : numbers)
		if (x == check)
			counttwo++;

	cout << countone << "\n"; // 3
	cout << counttwo << "\n"; // 3
	return 0;
}