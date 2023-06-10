//  Custom Swapping Function

#include <iostream>
#include <cctype>
using namespace std;

// Write Your Function Here

string swapping(string text) {
	int len = size(text);
	char result;
	for (int i = 0; i < len; i++) {
		if (text[i] == 'H'|| text[i] == 'h') {
			continue;
		}
		else if (isupper(text[i])) {
			    text[i] = char(tolower(text[i]));
				
			}
		else if(islower(text[i])) {
				text[i] = char(toupper(text[i]));
			}
		
	}
	return text;

}




int main()
{
	cout << swapping("hero Of THe PROgramming") << "\n"; // hERO oF tHE proGRAMMING
	return 0;
}