/*
Name : 11192 - Group Reverse
Problem : https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=2133
Solution : http://ideone.com/WsSrV1	
*/

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	int n;
	string s;
	while(cin >> n, n){
		cin >> s;
		int len = s.length();
		n = len / n;
		for(int i=0; i<=len-n; i+=n){
			//reverse(s.begin() + i, s.begin() + i + n + 1);
			int p = i;
			int q = (p+n) - 1;
			while(p < q){
				int temp = s[p];
				s[p] = s[q];
				s[q] = temp;
				
				p++;
				q--;
			}
		}
		cout << s << endl;
	}
	return 0;
}