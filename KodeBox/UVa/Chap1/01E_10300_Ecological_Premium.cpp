/*
Name : 10300 - Ecological Premium
Problem : https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=1241
Solution : http://ideone.com/IcYmFT
*/

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t, f, a, b, c;
	long long sum;
	cin >> t;
	while(t--){
		cin >> f;
		sum = 0;
		while(f--){
			cin >> a >> b >> c;
			sum += (long long)a * c;
		}
		cout << sum << endl;
	}
	return 0;
}