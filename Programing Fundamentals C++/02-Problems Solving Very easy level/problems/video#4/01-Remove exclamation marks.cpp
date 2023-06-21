#include <string>
using namespace std;

string removeExclamationMarks(string str){
  string temp = "";
  for(int i =0;i<size(str);i++){
    if(str[i] == '!')
        continue;
    
    temp+=str[i];
  }
  return temp;
}