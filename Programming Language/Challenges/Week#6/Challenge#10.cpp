
#include <array>
#include <iostream>
	using namespace std;

	int main()
	{
		
		array<int, 6> nums = { 10, 20, 30, 40, 20, 50 };

		// Method 1
		cout << "First: " << nums[0] << endl;
		cout << "First: " << nums[nums.size()-1] << endl;
		

		// Method 2
		cout << "First: " << nums.front() << endl;
		cout << "First: " << nums.back() << endl;

		// Method 3
		cout << "First: " << nums.at(0) << endl;
		cout << "First: " << nums.at(nums.size() - 1) << endl;


	
	return 0;
}