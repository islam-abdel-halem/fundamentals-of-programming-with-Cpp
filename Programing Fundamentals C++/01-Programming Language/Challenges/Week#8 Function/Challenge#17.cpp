//  Phone Prices With VATs

#include <iostream>
using namespace std;

// Write Your Function Here
int pricing(int totalTv, int noNew, int priceNew, int tex) {
	int totalNoNew = noNew * 200;
	int priceAll = (totalTv * priceNew);
	priceAll -= totalNoNew;
	float t =tex/100.0;
	float totaltex = priceAll * t;
	priceAll -= totaltex;
	return priceAll;
}

int main()
{
	cout << pricing(50, 10, 800, 20) << "\n"; // 30400
	return 0;
}