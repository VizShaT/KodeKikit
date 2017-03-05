/*
Name : A. Watermelon
Problem : http://codeforces.com/problemset/problem/4/A
Solution : http://codeforces.com/contest/4/submission/24258277
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

int main() {
	int w;
	cin >> w;
	if(w % 2 != 0 || w == 2)
		cout << "NO" << endl;
	else
		cout << "YES" << endl;
	return 0;
}

