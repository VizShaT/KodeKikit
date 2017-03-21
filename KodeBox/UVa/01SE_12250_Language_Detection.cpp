/*
Name : UVa 12250 - Language Detection
Problem : https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=3402
Solution : http://ideone.com/QfQi8K
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
	// your code goes here
	string s;
	int i = 1;
	while(cin >> s, s != "#"){
		cout << "Case " << i++ << ": ";
		if(s == "HELLO") cout << "ENGLISH";
		else if(s == "HOLA") cout << "SPANISH";
		else if(s == "HALLO") cout << "GERMAN";
		else if(s == "BONJOUR") cout << "FRENCH";
		else if(s == "CIAO") cout << "ITALIAN";
		else if(s == "ZDRAVSTVUJTE") cout << "RUSSIAN";
		else cout << "UNKNOWN";
		cout << "\n";
	}
	return 0;
}
