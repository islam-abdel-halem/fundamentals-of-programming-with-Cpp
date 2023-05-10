/*
    Arrays
    - What Is Array ?
    --- Collection Of Elements Of The Same Type
    --- Placed in Contiguous Memory Locations
    --- Referenced By Index Started From 0
    - Why We Need Array ?
    - Creating Array Syntax
    - Check Array Size
    - Create Array Without Size
*/

#include <iostream>
using namespace std;

int main()
{
	int point = 0;
	int answers[3];
	cout << "Type The Missing Number In Sequences:\n";

	cout << "Sequence 1\n";
	cout << "1 | 5 | 10 | 16 | ?? \n";
	cin >> answers[0];

	cout << "Sequence 2\n";
	cout << "2 | 4 | 8 | 16 | ?? \n";
	cin >> answers[1];

	cout << "Sequence 3\n";
	cout << "1 | 1 | 2 | 3 | ?? \n";
	cin >> answers[2];

	int array[3][5] = {
        {1, 5, 10, 16, 23},
        {2, 4, 8, 16, 32},
        {1, 1, 2, 3, 5}
	};

	if (answers[0] == array[0][4]) {
		point++;
	}
	if (answers[1] == array[1][4]) {
		point++;
	}
	if (answers[2] == array[2][4]) {
		point++;
	}

	cout << "Your Points Is " << point << " From 3\n";
	cout << "1 | 5 | 10 | 16 | 23 \n";
	cout << "2 | 4 | 8 | 16 | 32 \n";
	cout << "1 | 1 | 2 | 3 | 5 \n";

	return 0;
}