
#include <iostream>
using namespace std;

int main()
{
    int age = 40;
    int points = 800;
    float rate = 8.5f;

    // Your Condition Here
    string result = (age < 18) ? "Age < 18" : ((points < 500) ? "Points < 500" : ((rate < 5) ? "Rate < 5" : "Yes Age > 18 & Points > 500 & Rate > 5"));
    cout << result;
    // Output Needed If All Conditions Is True
    // "Yes Age > 18 & Points > 500 & Rate > 5"
    return 0;
}
