#include <vector>

int square_sum(const std::vector<int>& numbers)
{
    int sum=0;
    for(int val : numbers)
        sum+=val*val;
        return sum;
}