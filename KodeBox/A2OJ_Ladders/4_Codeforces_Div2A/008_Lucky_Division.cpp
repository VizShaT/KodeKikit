/*
Name : A. Lucky Division
Problem : http://codeforces.com/contest/122/problem/A
Solution : http://codeforces.com/contest/122/submission/24279502
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
	int a;
	cin >> a;
	cout<<(a%4==0||a%7==0||a%47==0||a%74==0||a%477==0||a%744==0 ? "YES":"NO");
	return 0;
}

