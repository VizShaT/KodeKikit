/*
Name : A. Presents
Problem : http://codeforces.com/contest/136/problem/A
Solution : http://codeforces.com/contest/136/submission/24629047
https://ideone.com/LrF0x8
*/

#include<iostream>
#include<algorithm>
#include<limits>
#include<string>
#include<vector>
#include<list>
#include<stack>
#include<queue>
using namespace std;

int returnIndex(int a[], int n, int value){
	for(int i=1; i<=n; i++){
		if(a[i] == value)
			return i;
	}
}
int main() {
	int n;
	cin >> n;
	int a[n];
	for(int i=1; i<=n; i++)
		cin >> a[i];
		
	for(int i=1; i<=n; i++){
		cout << returnIndex(a, n, i) << " ";
	}
	return 0;
}
