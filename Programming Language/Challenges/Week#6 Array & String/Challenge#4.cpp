#include <iostream>
using namespace std;

int main()
{
	const int size = 5;
	// Example 1
	int vals[size]{ 100, 200, 250, 400, 200 };

	// Needed Output
	if (vals[0] + vals[1] > vals[size/2]) {
		cout << "First Number + Last Number Is Larger Than Middle Number" << endl;
		cout << vals[0] << " + "<< vals[1]<<" = "<< vals[0] + vals[1] << endl;
		cout << vals[0] + vals[1] << " > "<< vals[size / 2] << endl;

	}
	
/*		"First Number + Last Number Is Larger Than Middle Number"
		"100 + 200 = 300"
		"300 > 250"
 */
	

		// Example 2
		int vals1[size]{ 100, 200, 500, 400, 200 };

	// Needed Output
		if (vals1[1] + vals1[size-2] > vals1[size/2]) {
			cout << "Second Number + Before Last Number Is Larger Than Middle Number" << endl;
			cout << vals1[1] << " + " << vals1[size - 2] << " = " << vals1[1] + vals1[size - 2] << endl;
			cout << vals1[1] + vals1[size - 2] << " > " << vals1[size / 2] << endl;
		}
		/*
		"Second Number + Before Last Number Is Larger Than Middle Number"
		"200 + 400 = 600"
		"600 > 500"
		 */


		// Example 3
		int vals2[size]{ 100, 200, 600, 400, 200 };
		if (vals2[0] + vals2[1] > vals2[size / 2]) {
			cout << "First Number + Last Number Is Larger Than Middle Number" << endl;
			cout << vals2[0] << " + " << vals2[1] << " = " << vals2[0] + vals2[1] << endl;
			cout << vals2[0] + vals2[1] << " > " << vals2[size / 2] << endl;

		}else if (vals2[1] + vals2[size - 2] > vals2[size / 2]) {
			cout << "Second Number + Before Last Number Is Larger Than Middle Number" << endl;
			cout << vals2[1] << " + " << vals2[size - 2] << " = " << vals2[1] + vals2[size - 2] << endl;
			cout << vals2[1] + vals2[size - 2] << " > " << vals2[size / 2] << endl;
		}
		else {
			cout << "Middle Number Is The Largest" << endl;
			cout << vals2[size / 2] << endl;
		}
	// Needed Output
	//"Middle Number Is The Largest"
	//	"600"
	return 0;
}