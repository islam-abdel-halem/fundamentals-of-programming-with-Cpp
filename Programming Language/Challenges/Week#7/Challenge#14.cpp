#include <iostream>
using namespace std;
int main() {
    
    int num = 2;
    while (num < 520) {
        num--;
        cout << num << endl;
		num = num * 2 + 3;
    }

    // Needed Output
    //1
    //4
    //10
    //22
    //46
    //94
    //190
    //382
    return 0;
}