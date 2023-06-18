
/*
  Control Flow
  - If Condition Trainings

  4 Training Apps
  - Even / Odd Checker
  - Find Greatest Number
  - User Rank Checker
  - Simple Calculator
*/

#include <iostream>
using namespace std;

int main()
{
    // App 1 => Even / Odd Checker
    int number;
    cout << "Enter a Number !";
    cin >> number;
    if (number % 2 == 0)
        cout << "The Number : " << number << " Is Even" << endl;
    else
        cout << "The Number : " << number << " Is Odd" << endl;

    // App 2 => Find Greatest Number
    int num1, num2, num3;
    cout << "Enter 3 Number :";
    cin >> num1 >> num2 >> num3;
    if (num1 > num2 && num1 > num3)
        cout << "The Greatest Number is " << num1 << endl;
    else if (num2 > num1 && num2 > num3)
        cout << "The Greatest Number is " << num2 << endl;
    else
        cout << "The Greatest Number is " << num3 << endl;

    // App 3 => User Rank Checker

    int points;
    cin >> points;

    if (points > 0 && points <= 500)
    {
        cout << "Not Bad\n";
    }
    else if (points > 500 && points <= 1000)
    {
        cout << "Very Good\n";
    }
    else
    {
        cout << "VIP\n";
    }

    // App 4 => Simple Calculator

    int num_one, num_two, op;

    cout << "Type Number One\n";
    cin >> num_one;
    cout << "Type Number Two\n";
    cin >> num_two;
    cout << "Choose Operation Number\n";
    cout << "[1] +\n";
    cout << "[2] -\n";
    cout << "[3] /\n";
    cout << "[4] *\n";
    cin >> op;

    if (op == 1)
    {
        cout << num_one + num_two << "\n";
    }
    else if (op == 2)
    {
        cout << num_one - num_two << "\n";
    }
    else if (op == 3)
    {
        cout << num_one / num_two << "\n";
    }
    else if (op == 4)
    {
        cout << num_one * num_two << "\n";
    }
    else
    {
        cout << "Operation Is Not Valid\n";
    }
    return 0;
}