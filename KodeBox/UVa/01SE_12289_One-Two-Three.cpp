/*
Name : UVa 12289 - One-Two-Three
Problem : https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=3710
Solution : https://ideone.com/U6N4uh
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
	int t;
	string s;
	cin >> t;
	while(t--) {
		cin >> s;
		if (s.length() > 3)
			printf("3\n");
		else {
			if(s[0] == 'o' && s[1] == 'n' && s[2] == 'e') printf("1\n");
			else if(s[0] == 'o' && s[1] == 'n') printf("1\n");
			else if(s[0] == 'o' && s[2] == 'e') printf("1\n");
			else if(s[1] == 'n' && s[2] == 'e') printf("1\n");
			else if(s[0] == 't' && s[1] == 'w' && s[2] == 'o') printf("2\n");
			else if(s[0] == 't' && s[1] == 'w') printf("2\n");
			else if(s[0] == 't' && s[2] == 'o') printf("2\n");
			else if(s[1] == 'w' && s[2] == 'o') printf("2\n");
		}
	}

	return 0;
}