//  Reversing Elements

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> nums = { 5, 4, 3, 2, 1 };

    // Method One
    /*reverse(nums.begin(),nums.end());*/
    // Method Two
    /*sort(nums.begin(), nums.end());*/
    // Method Three -> Use Swap + Loop For Challenge
	int i, j;

	for (i = 0; i < nums.size() - 1; i++)
	{
		for (j = i + 1; j < nums.size(); j++)
		{
			if (nums[i] > nums[j])
			{
				swap(nums[i], nums[j]);
			}
		}
	}
    for (int i : nums)
    {
        cout << i << "\n";
    }

    return 0;
}

// Needed Output
//1
//2
//3
//4
//5