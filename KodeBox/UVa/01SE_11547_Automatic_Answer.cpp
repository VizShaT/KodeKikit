/*
Name : UVa 11547 - Automatic Answer
Problem : https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=2542
Solution : http://ideone.com/Lh1Baj
*/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int t, n;
	cin >> t;
	while(t--){
		cin >> n;
		int ans = abs((((n*567)/9 + 7492) * 235 )/47 -498);
		cout << (ans/10)%10 << "\n";
	}
	return 0;
}