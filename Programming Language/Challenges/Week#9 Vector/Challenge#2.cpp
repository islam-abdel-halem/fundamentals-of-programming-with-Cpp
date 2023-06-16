//  First And Last Elements

#include <iostream>
#include <vector>
using namespace std;


int main()
{
	vector<int> numbers = { 10, 20, 30, 40 };
	vector<int>::iterator item = numbers.begin();
	cout << numbers.at(0)<<endl;
	cout << numbers[0]<<endl;
	cout << *numbers.begin()<<endl;
	cout << *item<<endl;
	cout << "==========================\n";
	cout << numbers.at(numbers.size()-1) << endl;
	cout << numbers[numbers.size() - 1] << endl;
	cout << *(numbers.end()-1) << endl;
	item = numbers.end() - 1;
	cout << *item << endl;



}