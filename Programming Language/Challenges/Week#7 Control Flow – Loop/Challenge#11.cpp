#include <iostream>
using namespace std;
int main() {
    
   
    // Friends Array
    string friends[] = { "Ahmed", "Osama", "Ameer" };
    int size = sizeof(friends) / sizeof(friends[0]);
    for (int i = 0; i < size; i++) {
        cout << "=========\n";
        cout << "= " << friends[i] << " =\n";
        cout << "===================\n";
        cout << "== ";
        for (int j = 0; j < 5; j++) {
            cout << friends[i][j]<<", ";
        }
        cout<<"=\n===================\n\n";

    }

    // Output Needed
    //=========
    //= Ahmed =
    //==================
    //== A, h, m, e, d =
    //==================

    //=========
    //= Osama =
    //==================
    //== O, s, a, m, a =
    //==================

    //=========
    //= Ameer =
    //==================
    //== A, m, e, e, r =
    //==================
    return 0;
}