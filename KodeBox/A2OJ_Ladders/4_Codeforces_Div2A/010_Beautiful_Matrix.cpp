/*
Name : A. Beautiful Matrix
Problem : http://codeforces.com/contest/263/problem/A
Solution : http://codeforces.com/contest/263/submission/24629787
https://ideone.com/kUuTGS
*/

#include<iostream>
#include<algorithm>
#include<limits>
#include<string>
#include<vector>
#include<list>
#include<stack>
#include<queue>
#include<cmath>
using namespace std;

int main() {
	int x;
	for(int i=1; i<=5; i++){
		for(int j=1; j<=5; j++){
			cin >> x;
			if(x == 1){
				cout << abs(3-i) + abs(3-j) << endl;
			}
		}
	}
	return 0;
}

