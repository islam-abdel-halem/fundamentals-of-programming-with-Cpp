/*
Primitive Data Types
- char => Character
--- Added Inside Single Quotes => Test With Auto
--- ASCII Value
--- ASCII => American Standard Code for Information Interchange.
--- A Way of Representing Characters As Numbers

--- Search For Type Casting
--- Create App To Convert ASCII To Character
--- Create App To Convert Character To ASCII
*/

#include <iostream>
using namespace std;

int main()
{
    char a = 'A';
    cout << sizeof(a) << "\n"; // 1

    auto b = 'B';
    cout << sizeof(b) << "\n"; // 1

    auto c = "C";
    cout << sizeof(c) << "\n"; // 8

    char d = 'Z';
    cout << int(d) << "\n"; // 90

    cout << int('%') << "\n"; // 37
    cout << int('(') << "\n"; // 40
    cout << int(')') << "\n"; // 41

    // cout << int("Z") << "\n"; // Error

    cout << char(81) << "\n"; // Q

    // app
    cout << "Enter ASCII Value ? ";
    int a;
    cin >> a;
    cout << char(a) << endl;
    cout << "Enter Char ? ";
    char b;
    cin >> b;
    cout << int(b) << endl;

    return 0;
}