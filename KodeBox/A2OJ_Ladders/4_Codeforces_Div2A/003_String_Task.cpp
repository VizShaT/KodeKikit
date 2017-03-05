/*
Name : A. String Task
Problem : http://codeforces.com/problemset/problem/118/A
Solution : http://codeforces.com/contest/118/submission/24259122
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
	// your code goes here
	string s;
	cin >> s;
	int len = s.length();
	std::transform(s.begin(), s.end(),s.begin(), ::tolower);
	string::iterator it;
	for(int i=0; i<s.length(); i++){
		if(!(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'y')){
			cout << "." << s[i];
		}
	}
	cout << endl;
	return 0;
}

/*
tour
.t.r

Codeforces
.c.d.f.r.c.s

aBAcAba
.b.c.b
*/
