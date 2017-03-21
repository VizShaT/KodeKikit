/*
Name : 01E_11799_Horror_Dash
Problem : https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=2899
Solution : http://ideone.com/bqCIjL
*/

#include <iostream>
#include <climits>
using namespace std;

int main() {
	int t, n, x;
	cin >> t;
	for(int i=0; i<t; i++){
		cin >> n;
		int max = INT_MIN;
		while(n--){
			cin >> x;
			if(x > max)
				max = x;
		}
		cout << "Case " << i+1 << ": " << max << "\n";
	}
	return 0;
}