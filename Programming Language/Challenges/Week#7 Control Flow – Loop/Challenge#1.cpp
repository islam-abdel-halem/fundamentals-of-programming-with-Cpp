#include <iostream>
using namespace std;
int main() {
    for (int i = 0; i <= 10; i++) {
        cout << i << endl;
    }
    cout << endl;
    int i = 0;
    while (i <= 10) {
        cout << i << endl;
        i++;
    }
    cout << endl;
    i = 0;
    do {
        cout << i << endl;
        i++;
    } while (i <= 10);
    return 0;
}