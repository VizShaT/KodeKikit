/*
Name : 12577 - Hajj-e-Akbar
Problem : https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=4022
Solution : http://ideone.com/cZLFoa
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	int k = 0;
	while(cin >> s, s != "*"){
		cout << "Case " << ++k << ": ";
		if(s == "Hajj")
			cout << "Hajj-e-Akbar\n";
		else
			cout << "Hajj-e-Asghar\n";
	}
	return 0;
}