/*
Name: UVa 11364 - Parking
Problem: https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=2349
Solution : http://ideone.com/Ol8krc
*/

#include <iostream>
#include <climits>
using namespace std;

int main() {
	int t, n, x;
	cin >> t;
	while(t--){
		int max = INT_MIN, min = INT_MAX;
		cin >> n;
		while(n--){
			cin >> x;
			if(x < min)
				min = x;
			if(x > max)
				max = x;
		}
		cout << 2*(max - min) << "\n";
	}
	return 0;
}