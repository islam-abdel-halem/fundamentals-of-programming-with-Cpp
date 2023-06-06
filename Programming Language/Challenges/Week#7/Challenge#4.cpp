#include <iostream>
using namespace std;
int main() {
    
   
    for (int i = 0; i < 20; i+=2) {
        if (i == 10 || i == 12) {
            continue;
        }
        else {
			cout << i << endl;
		}
       
    }
    cout << endl;

  int i = 0;
while (i < 20) {
    if (i%2==0) {
        if(i == 10 || i == 12){
        i++;
        continue;
        }
        cout << i << endl;
    }
    i++;
}
    return 0;
}