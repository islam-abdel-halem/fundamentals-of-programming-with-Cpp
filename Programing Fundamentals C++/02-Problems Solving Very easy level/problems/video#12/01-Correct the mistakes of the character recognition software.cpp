#include <string>
using namespace std;
string correct(string str){
    
    for(int x =0;x<str.length();x++){
        if(str[x]=='5')
        str[x]='S';
        else if(str[x]=='0')
        str[x]='O';
        else if(str[x]=='1')
        str[x]='I';
    }
    return str;
}