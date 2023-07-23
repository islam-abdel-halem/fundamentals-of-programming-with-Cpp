#include <string>
using namespace std;

string people_with_age_drink(int age) {
    string drink ="";
    if(age<14)
        drink ="toddy";
    else if(age>13 && age<18)
        drink ="coke";
    else if(age>17 && age<21)
        drink ="beer";
    else if(age>20)
        drink ="whisky";
    return "drink "+ drink;
}