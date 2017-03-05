/*
Name: A. Helpful Maths
Problem: http://codeforces.com/problemset/problem/339/A
Solution: http://codeforces.com/contest/339/submission/24259672
*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std; 

int main() {
	string s;
	vector<char> v;
	cin >> s;
	int len = s.length();
	for(int i=0; i<len; i++){
		if(s[i] != '+')
			v.push_back(s[i]);
	}
	sort(v.begin(), v.end());
	for(int i=0; i<v.size(); i++){
		cout << v[i];
		(i != v.size()-1) ? cout << "+" : cout << "\n";	
	}

	return 0;
}