// DESCRIPTION:
// Consider an array/list of sheep where some sheep may be missing from their place. We need a function that counts the number of sheep present in the array (true means present).

// For example,

// [true,  true,  true,  false,
//   true,  true,  true,  true ,
//   true,  false, true,  false,
//   true,  false, false, true ,
//   true,  true,  true,  true ,
//   false, false, true,  true]
// The correct answer would be 17.

// Hint: Don't forget to check for bad values like null/undefined

// First Solution
#include <algorithm>
#include <vector>

int count_sheep(std::vector<bool> v) {
    return std::count(v.cbegin(), v.cend(), true);
}

// Second Solution

#include <vector>

using namespace std; 

int count_sheep(vector<bool> arr) 
{
  int count=0;
  for (int i = 0; i < arr.size(); i++){
    if(arr[i] == true)
      count++;
  }
  return count;
}

