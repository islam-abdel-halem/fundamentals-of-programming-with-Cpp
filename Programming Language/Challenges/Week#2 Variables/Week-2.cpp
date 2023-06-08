// Challenge 1

// #include <iostream>
// using namespace std;

// int main()
// {
//     // Write Your Code Here
//     int age = 40,period=10;
//     // Do Not Edit The Next 2 Lines
//     cout << "My Age Is: " << age << "\n";
//     cout << period << " Years Ago My Age Was: " << age - period << "\n";
//     cout << "After 10 Years My Age Will Be : " << age + 10;

//     // Add The Third Line Below

//     return 0;
// }

// Challenge 2

// #include <iostream>
// using namespace std;

// int main()
// {
//     // Write Your One Line Code Here
//     int a, b, c;
//     // Do Not Edit Below
//     a = 10, b = 20, c = 70;
//     cout << "Sum Of All Number Is: " << a + b + c;
//     return 0;
// }

// Challenge 3

/*
  name        [ Valid | Good Practice ]
  NAME        [ Valid | Bad Practice ]
  1name       [ Not Valid | Bad Practice ] => Reason ? start variable a number
  __name      [ Valid | Bad Practice ] => Reason ? using two __Underscore
  name@name   [ Not Valid | Bad Practice ] => Reason ? using Special Characters
  name10name  [ Valid | Bad Practice ] => Reason ? not Good Practice
  name!name   [ Not Valid | Bad Practice ] => Reason ? using Special Characters
  first_NAME  [ Valid | Good Practice ]
  first_name  [ Valid | Good Practice ]
  firstName   [ Valid | Good Practice ]
  first name  [ Not Valid | Bad Practice ] => Reason ? white space
  fn          [ Valid | Bad Practice ]
  public      [ Not Valid | Bad Practice ] => Reason ? using Reserved Keywords
  Public      [ Not Valid | Bad Practice ] => Reason ? using Reserved Keywords
*/

// Challenge 4

// #include <iostream>
// using namespace std;

// int main()
// {
//     // Write my_text Variable Content Here
//     string my_text = "============\n== Elzero ==\n============";

//     // Do Not Edit Below
//     cout << my_text;
//     return 0;
// }

// // Needed Output
// ============
// == Elzero ==
// ============

// Challenge 5

// #include <iostream>
// using namespace std;

// int main()
// {
//     // Do Not Edit Below
//     int a, b, c = 100;

//     // Add Your Code Here
//     a = b = 100;
//     // Do Not Edit Below
//     cout << a + b + c; // 300
//     return 0;
// }

// Challenge 6

// #include <iostream>
// using namespace std;

// int main()
// {
//     // Do Not Edit Below
//     int a = 210, b = -50, c = -40;

//     // Write Your cout Code Here
//     cout << a + b*-1 + c*-1;
//     return 0;
// }

// Challenge 7

// #include <iostream>
// using namespace std;

// int num = 50;

// int read()
// {
//     int num = 100;
//     cout << num;
//     return 0;
// }

// int play()
// {
//     int num = 200;
//     read();
//     return 0;
// }

// int main()
// {
//     play();
//     return 0;
// }

// Challenge 8

// #include <iostream>
// using namespace std;
// int main()
// {
//     // Edit Here To Fix The Error
//     int current_year;
//     int birth_year;

//     // Do Not Edit Here
//     current_year = 2022;
//     birth_year = 1982;
//     int age_in_years = current_year - birth_year;
//     cout << age_in_years;
//     return 0;
// }

// Challenge 9

// #include <iostream>
// using namespace std;

// int main()
// {
//     // Write Your Code Here
//     int num;
//     cin >> num;

//     // Needed Output 100 [10 * 10]
//     cout << num * num<<" ["<<num<<" * "<<num<<"]";
//     return 0;
// }


// Challenge 10

// #include <iostream>
// using namespace std;

// int main()
// {
//     // Write Your Code Here
//     int numberOne, numberTwo;
//     cin >> numberOne >> numberTwo;

//     // Number One => 10
//     // Number Two => 100
//     // Needed Output 1000 [10 * 100]
//     cout << numberOne * numberTwo << " [" << numberOne << " * " << numberTwo << "]";
//     return 0;
// }


// Challenge 11

// #include <iostream>
// using namespace std;

// int main()
// {
//     cout << "Bello\rHello Elzeroo\b";
//     cout << " Web Schooll\bl\b";
//     cout << " I Love Programming";
//     cout << " Too Much";
//     cout << " Specially C++";
//     return 0;
// }

// Needed Output
// "Hello Elzero Web School I Love Programming Too Much Specially C++"