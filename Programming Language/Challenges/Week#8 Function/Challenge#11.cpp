//  Maximum Negative Number


#include <iostream>
using namespace std;

// Write Your Function Here
int firstnegative(int numbers[],int numssize) {
	int max =INT_MIN;
	for (int i = 0; i < numssize; i++) {
		if (numbers[i] < 0 && numbers[i] > max) {
			max = numbers[i];
		}
	}
	return max;
}

int main()
{
	int numbers[] = { -10, -20, 15, 100, 10, 5, -50, 0, -5, -10 }; // -5
	int numssize = size(numbers);
	cout << firstnegative(numbers, numssize) << "\n";
	return 0;
}