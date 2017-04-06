/*
Name: 11172 - Relational Operator
Problem: https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=2113
Solution : http://ideone.com/uHkLKo
*/

#include <iostream>
using namespace std;

int main() {
	int t, a ,b;
	cin >> t;
	while(t--){
		cin >> a >> b;
		if(a > b) cout << ">";
		else if(a < b) cout << "<";
		else cout << "=";
		cout << "\n";
	}
	return 0;
}