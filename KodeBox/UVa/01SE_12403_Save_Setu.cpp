/*
Name : UVa 12403 - Save Setu
Problem : https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=3834
Solution : http://ideone.com/ZJYTLY
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
	int t;
	int sum = 0, money;
	string s;
	cin >> t;
	while(t--){
		cin >> s;
		if(s == "donate"){
			cin >> money;
			sum += money;
		}
		else
			cout << sum << "\n";
	}
	return 0;
}