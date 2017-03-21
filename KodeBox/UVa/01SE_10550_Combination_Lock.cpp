/*
Name : UVa 10550 - Combination Lock
Problem : https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=1491
Solution : http://ideone.com/eVTz0L
*/

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int start, c1, c2, c3;
	while(cin >> start >> c1 >> c2 >> c3, start || c1 || c2 || c3){
		int result = 1080;
		result += ((start - c1 + 40) % 40 + (c2 - c1 + 40) % 40 + (c2 - c3 + 40) % 40) * 9;
		
		cout << result << "\n";
	}
	return 0;
}