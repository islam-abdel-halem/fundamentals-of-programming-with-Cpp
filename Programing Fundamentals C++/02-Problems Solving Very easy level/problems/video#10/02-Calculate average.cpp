#include <vector>

double calcAverage(const std::vector<int>& values){
    float sum =0.0,count=0.0;
    float average=0.0;
    for(int val : values){
        sum+=val;
        count++;
    }
    if(values.empty())
        average=0.0;
    else{
        average=sum/count;
    }
    return average;
}