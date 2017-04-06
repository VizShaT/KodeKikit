/*
Name : 11496 - Musical Loop
Problem : https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=2491
Solution : http://ideone.com/pLFsRc
*/

#include <iostream>
using namespace std;

int main() {
	int n;
	while(cin >> n, n){
		int h[10005];
		for(int i=0; i<n; i++)
			cin >> h[i];
			
		int count = 0;
		for(int i=0; i<n; i++){
			count += (h[i] < h[(i + 1) % n] && h[i] < h[(i - 1 + n) % n]);
			count += (h[i] > h[(i + 1) % n] && h[i] > h[(i - 1 + n) % n]);
		}
		cout << count << "\n";
	}
	return 0;
}