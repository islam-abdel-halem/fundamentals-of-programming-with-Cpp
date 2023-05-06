
#include <iostream>
using namespace std;

int main()
{
    int year;
    cout << "Enter a year!";
    cin >> year;
    switch (year)
    {
    case 1982:
        cout << "My Birth Day";
    case 1989:
        cout << "My First Work";
    case 1995:
        cout << "Windows 95";
    case 2000:
        cout << "Windows Millennium";
    case 2002:
        cout << "Created My vBulletin Forum";
    default:
        cout << "No Events in This Year";
    }

    /*
        1982 => "My Birth Day"
        1989 => "My First Work"
        1995 => "Windows 95"
        2000 => "Windows Millennium"
        2002 => "Created My vBulletin Forum"
        Any Other Year => "No Events in This Year"
    */
    return 0;
}
