/*
Name : 11727 - Cost Cutting
Problem : https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=2827
Solution : https://ideone.com/Gfpxzv
*/

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int t;
	cin >> t;
	for(int k=1; k<=t; k++){
		int a[4];
		for(int i=0; i<3; i++)
			cin >> a[i];
		sort(a, a+3);
		cout << "Case " << k <<": " << a[1] << "\n";
	}
	return 0;
}