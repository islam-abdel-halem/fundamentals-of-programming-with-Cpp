//problem

// Is the string uppercase?
// Task
// Create a method to see whether the string is ALL CAPS.

// Examples (input -> output)
// "c" -> False
// "C" -> True
// "hello I AM DONALD" -> False
// "HELLO I AM DONALD" -> True
// "ACSKLDFJSgSKLDFJSKLDFJ" -> False
// "ACSKLDFJSGSKLDFJSKLDFJ" -> True
// In this Kata, a string is said to be in ALL CAPS whenever it does not contain any lowercase letter so any string containing no letters at all is trivially considered to be in ALL CAPS.

#include <string>
#include <cctype>
#include <iostream>
#include <cstring>
using namespace std;
bool is_uppercase(const string &s) {
  bool check=true;
  for(int i=0; i <s.length();i++){
    if(islower(s[i]))
      check=false;
  }
  return check; 
}
