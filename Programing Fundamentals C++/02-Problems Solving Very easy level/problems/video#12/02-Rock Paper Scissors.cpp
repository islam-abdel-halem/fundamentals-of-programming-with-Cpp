#include <string>
using namespace std;

string rps(const string& p1, const string& p2)
{
    string win="";
    if( (p1=="scissors" && p2=="paper") || (p1=="rock" && p2=="scissors") || (p1=="paper" && p2=="rock") )
        win="Player 1 won!";
    else if( (p1=="scissors"&&p2=="rock") || (p1=="paper" && p2=="scissors") || (p1=="rock" && p2=="paper") )
        win="Player 2 won!";
    else if( (p1=="paper" && p2=="paper") || (p1=="rock" && p2=="rock") || (p1=="scissors" && p2=="scissors") )
    win="Draw!";
        return win;
}

//ather way

#include <string>

std::string rps(const std::string& p1, const std::string& p2)
{
    if(p1 == p2)
        return "Draw!";
    if( ( p1[0] == 's' && p2[0] == 'p' ) || ( p1[0] == 'p' && p2[0] == 'r' ) || ( p1[0] == 'r' && p2[0] == 's' ) )
        return "Player 1 won!";
    return "Player 2 won!";
}