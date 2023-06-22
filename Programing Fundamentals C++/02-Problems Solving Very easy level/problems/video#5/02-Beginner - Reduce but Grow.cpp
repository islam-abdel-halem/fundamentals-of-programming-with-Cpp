#include <vector>
int grow(std::vector<int> nums) {
  int sum = 1;
  for(int i : nums){
    sum*=i;
  }
  return sum;
}