//  Result Of Number And Numbers Before

#include <iostream>
using namespace std;

int beforeresult(int main_number, int number_of_numbers) {
    int sum_of_numbers = 0;
    for (int i = 0; i <= number_of_numbers; i++) {
        sum_of_numbers += main_number - i;
    }
    return sum_of_numbers;
}

int main()
{
    cout << beforeresult(10, 5) << "\n"; // 10 + 9 + 8 + 7 + 6 + 5 = 45
    // Main Number [10]
    // Numbers Before [9 + 8 + 7 + 6 + 5] <- 5 Numbers
    cout << beforeresult(15, 3) << "\n"; // 15 + 14 + 13 + 12 = 54
    // Main Number [1015
    // Numbers Before [14 + 13 + 12] <- 3 Numbers
    return 0;
}





