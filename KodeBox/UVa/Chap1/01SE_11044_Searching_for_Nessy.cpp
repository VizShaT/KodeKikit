/*
Name : UVa 11044 - Searching for Nessy
Problem : https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=1985
Solution : http://ideone.com/GKsOa9
*/
#include <iostream>
using namespace std;

int main() {
	int t, n, m;
	cin >> t;
	while(t--){
		cin >> n >> m;
		cout << (n/3)*(m/3) << "\n";
	}
	return 0;
}