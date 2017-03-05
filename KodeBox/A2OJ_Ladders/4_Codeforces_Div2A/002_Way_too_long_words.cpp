/*
Name : A. Way Too Long Words
Problem : http://codeforces.com/problemset/problem/71/A
Solution : http://codeforces.com/contest/71/submission/24258501
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
	int t;
	string s;
	cin >> t;
	while(t--){
		cin >> s;
		int len = s.length();
		if(len > 10){
			cout << s[0] + to_string(len-2) + s[len-1] << endl;
		}else{
			cout << s << endl;
		}
	}
	return 0;
}

