/*
Name : A. Petya and Strings
Problem : http://codeforces.com/problemset/problem/112/A
Solution : http://codeforces.com/contest/112/submission/24259469
*/

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	// your code goes here
	string s1, s2;
	cin >> s1 >> s2;
	std::transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
	std::transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
	
	int len = s1.length();
	int i;
	for(i=0; i<len; i++){
		if(s1[i] == s2[i])
			continue;
		else if(s1[i] < s2[i]){
			cout << -1 << endl;
			break;
		}
		else if(s1[i] > s2[i]){
			cout << 1 << endl;
			break;
		}
	}
	if(i==len)
		cout << 0 << endl;
	return 0;
}