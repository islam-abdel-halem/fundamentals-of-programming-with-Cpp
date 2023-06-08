#include <iostream>
using namespace std;
int main() {
    
   
        
    for (int i =2 ; i <=128; i=(i*2)+2) {

			cout << i<< endl;
    }
    cout << endl;

    int i = 2;
    while (i <= 128) {
        
            cout << i << endl;
            
            i = (i * 2) + 2;
    }
    return 0;
}