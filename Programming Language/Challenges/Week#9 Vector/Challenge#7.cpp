//  Complete The Loop

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> numbers = { 10, 20, 10, 40, 50 };
    vector<int>::iterator iter = numbers.begin();

    for (;;)
    {
        // Your Code Here
        if (iter == numbers.end())
            break;
        else {
            cout << *iter<<" ";
            iter++;
        }

    }

    return 0;
}