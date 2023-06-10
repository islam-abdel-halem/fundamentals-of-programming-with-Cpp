//  Average Money Per Day Function


#include <iostream>
using namespace std;

// Write Your Functions Here
float avg(int money[],int monsize) {
	float salary = 0.0;
	float result=0.0;
	for (int i = 0; i < monsize; i++) {
		salary += money[i];
	}
	result = salary / monsize;
	return result;
}


int main()
{
	int money[] = { 10, 20, 15, 25, 30, 35 };
	int monsize = size(money);
	cout << avg(money, monsize) << "\n"; // 22.5
	return 0;
}