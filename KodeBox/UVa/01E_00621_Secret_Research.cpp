/*
Name : UVa 621 - Secret Research
Problem : https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=562
Solution : http://ideone.com/QHN047
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
	int t;
	string s;
	cin >> t;
	while(t--){
		cin >> s;
		int len = s.length();
		
		if(s[len-1] == '5') cout << "-";
		else if(s[0] == '9' && s[len-1] == '4') cout << "*";
		else if(s[0] == '1' && len >= 3) cout << "?";
		else cout << "+";
		
		cout << "\n";
	}
	return 0;
}