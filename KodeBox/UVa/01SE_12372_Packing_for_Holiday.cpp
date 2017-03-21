/*
Name: UVa 12372 - Packing for Holiday
Problem: https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=3794
Solution : http://ideone.com/KLkqzy
*/

#include <iostream>
using namespace std;

int main() {
	int t, l, b, h, k=0;
	cin >> t;
	while(t--){
		cin >> l >> b >> h;
		cout << "Case " << ++k << ": ";
		if(l <= 20 && b <= 20 && h <= 20)
			cout << "good\n";
		else
			cout << "bad\n";
	}
	return 0;
}