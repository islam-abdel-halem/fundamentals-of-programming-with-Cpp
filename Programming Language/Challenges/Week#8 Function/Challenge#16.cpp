//  Available Space For Books

#include <iostream>
using namespace std;

// Write Your Function Here
int books(int small, int middel, int big, int shelves) {
	int areaSmall = small * 2;
	int areaMiddel = middel * 4;
	int areaBig = big * 6;
	int areashelves = shelves * 20;
	int totalArea = areaSmall + areaMiddel + areaBig;
	if (totalArea >= areashelves) {
		return 0;
	}
	else
	{
		return areashelves - totalArea;
	}
}

int main()
{
	cout << books(10, 4, 3, 4) << "\n"; // 26
	cout << books(10, 4, 3, 2) << "\n"; // 0
	return 0;
}