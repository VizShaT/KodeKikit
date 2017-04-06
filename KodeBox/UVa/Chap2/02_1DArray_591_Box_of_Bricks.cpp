/*
Name : 591 - Box of Bricks
Problem : https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=532
Solution : http://ideone.com/Z1wpkk
*/

#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main() {
	int n , t = 1;
	while(cin >> n, n){
		cout << "Set #" << t << "\n";
		int sum =0, x[n];
		for(int i=0; i<n; i++){
			cin >> x[i];
			sum += x[i];
		}
		int avg = sum / n;
		int diff = 0;
		for(int i=0; i<n; i++){
			diff += abs(x[i] - avg);
		}
		cout << "The minimum number of moves is " << diff / 2 << ".\n";
		
		if(t)
			puts("");
			
		t++;
	}
	return 0;
}