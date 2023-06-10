//  Plus For Even And Multiply For Odd

#include <iostream>
using namespace std;

// Write Your Function Here

int plusandmultiply(int array[], int size) {
	int sumEven = 0;
	int multodd = 1; // not 0 , 0*n=0
	int total = 0;
	for (int i = 0; i < size; i++) {
		if (array[i] % 2 == 0) {
			sumEven += array[i];
		}
		else if (array[i] % 2 != 0) {
			multodd *= array[i];
		}

	}
	array[0] = sumEven;
	array[1] = multodd;
	total = array[0] + array[1];
	return total;

}

int main()
{
	int numbers[] = { 10, 20, 3, 30, 5, 7, 40 };
	int numssize = size(numbers);
	cout << plusandmultiply(numbers, numssize) << "\n";
	// Even Numbers -> 10 + 20 + 30 + 40 = 100
	// Odd Numbers  -> 3 * 5 * 7 = 105
	// Total = 100 + 105 = 205
	return 0;
}





