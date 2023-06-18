//  Create Vector & Loop On It

#include <iostream>
#include <vector>
using namespace std;


int main()
{
	vector<int> nums{100, 200, 300, 400};
	vector<int>::iterator i;
	for (i = nums.begin(); i != nums.end(); i++) {
		cout << *i <<endl;
	}
	nums.push_back(500);
	cout << "First Element Is: " << *nums.begin()<<endl;
	cout << "Last Element Is: " << *(nums.end() - 1);



	// Output
	//100
	//200
	//300
	//400
    //"First Element Is: 100"
    //"Last Element Is: 500"
}