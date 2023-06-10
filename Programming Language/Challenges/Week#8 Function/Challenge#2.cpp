//  Money Needed Per Day

#include <iostream>
using namespace std;

// Write Your Function Here
float money(float income, int days);

int main()
{
    /*
      Hints
      21 Days Has 3 "Weeks"
      Every "Week" You Have 2 Holidays.
      Total = 3 * 2 = 6 Holidays From 21 Days
    */
    cout << money(2015, 21) << "\n"; // 134.333
    cout << money(4500, 40) << "\n"; // 150
    return 0;
}

float money(float income, int days) {
    int weeks = days / 7;
    int Holidays = weeks * 2;
    int daysActually = days - Holidays;
    float expenses = income / daysActually;
    return expenses;
}