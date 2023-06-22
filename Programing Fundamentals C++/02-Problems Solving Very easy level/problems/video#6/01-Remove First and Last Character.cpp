#include <string>

using namespace std; 

string sliceString (string str )
{
string neww;
for(int i=0;i<size(str);i++){
        if(i==0 || i==size(str)-1)
        continue;
        neww+=str[i];
    }
    return neww; 
}

// ather way

#include <string>
using namespace std; 

string sliceString (string str ){
    return str.substr(1, str.size() - 2); 
}