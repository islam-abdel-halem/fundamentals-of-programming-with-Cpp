#include <iostream>
using namespace std;
int main() {
    string names[] = { "Osama", "Ahmed", "Mahmoud", "Hagar", "Eman", "Salwa" };
    int size = sizeof(names) / sizeof(names[0]);
    for (int i = 0; i < size; i++) {
        int len = names[i].length();
        if(len==5){
		cout << names[i] << endl;
        }
	}

    // Output Needed
    //"Osama"
    //"Ahmed"
    //"Hagar"
    //"Salwa"
    return 0;
}