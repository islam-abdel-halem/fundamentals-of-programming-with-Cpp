#include <string>
using namespace std;
string no_space(const string& x)
{
  string noSpace="";
  for(int i =0;i<size(x);i++){
    if(x[i]==' ')
      continue;
    noSpace+=x[i];
  }
   return noSpace;
}