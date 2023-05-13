#include <iostream>
using namespace std;

int main()
{
	// Example 1
	int check1 = 25;
	int nums1[]{ 40, 20, 30, 70, 100 };

	// Ouput
	cout << "{" << nums1[0] << "}" << " + " << "{" << nums1[3] << "}" << " = " << nums1[0] + nums1[3]<<endl;
	//"{40} + {70} = 110"

		// Example 2
		int check2 = 25;
	int nums2[]{ 20, 35, 30, 70, 100 };

	// Ouput
     cout << "{" << nums1[1] << "}" << " + " << "{" << nums1[3] << "}" << " = " << nums1[1] + nums1[3]<<endl;
	//"{35} + {70} = 105"

		// Example 2
		int check3 = 25;
	int nums3[]{ 20, 25, 30, 70, 100 };

	// Ouput
	cout << "{" << nums1[2] << "}" << " + " << "{" << nums1[3] << "}" << " = " << nums1[3] + nums1[3]<<endl;
	//"{30} + {70} = 100"
	return 0;
}