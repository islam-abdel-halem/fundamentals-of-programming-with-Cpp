
#include <iostream>
using namespace std;
int main() {
    cout << "Enter Number 1 : ";
    int num1, num2, max, min;
    cin >> num1;
    cout << "Enter Number 2 : ";
    cin >> num2;

    if (num1 > num2) {
        max = num1;
        min = num2;
    }
    else {
        max = num2;
        min = num1;
    }
    min++;
    cout << "output : ";
    for (int i = min; i < max; i++) {
        if (i % 2 != 0) {
            cout << i << " ";
        }
    }

    return 0;
}