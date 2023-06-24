#include <iostream>
using namespace std;

string to_alternating_case(const string& str)
{
  string newStr;
  for (int i = 0; i < str.length(); i++) 
  {
    if (isupper(str[i])) 
    {
      newStr += tolower(str[i]);
    } 
    else if (islower(str[i]))
    {
      newStr += toupper(str[i]);
    }
    else 
    {
      newStr += str[i];
    }
  }
	return newStr;
}

//ather way

#include <iostream>

std::string to_alternating_case(std::string str)
{
  for(auto& ch : str)
  {
    ch = std::islower(ch) ? std::toupper(ch) : std::tolower(ch);
  }
  return str;
}
