/*
Name : 11498 - Division of Nlogonia
Problem : https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=2493
Solution : http://ideone.com/WF9bIR
*/

#include <iostream>
using namespace std;

int main() {
	int t, tc, n, m, x ,y;
	while((cin >> t), t != 0){
		cin >> n >> m;
		while(t--){
			cin >> x >> y;
			if(x == n || y == m) cout << "divisa";
			else if(x < n && y > m) cout << "NO";
			else if(x > n && y > m) cout << "NE";
			else if(x > n && y < m) cout << "SE";
			else if(x < n && y < m) cout << "SO";
			cout << "\n";
		}
	}
	return 0;
}