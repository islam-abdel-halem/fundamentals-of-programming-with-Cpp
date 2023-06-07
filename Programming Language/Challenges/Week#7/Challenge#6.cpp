#include <iostream>
using namespace std;
int main() {
    
   
        int num = 10 ;
    for (int i = 0; i <4; i++) {
			cout << num << endl;
            num *= num; 
    }
    cout << endl;

    int i = 0,num2=10;
    while (i < 4) {
        
            cout << num2 << endl;
            num2 *= num2;
        i++;
    }
    return 0;
}