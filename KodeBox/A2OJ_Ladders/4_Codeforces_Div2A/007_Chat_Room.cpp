/*
Name : A. Chat Room
Problem : http://codeforces.com/contest/58/problem/A
Solution : 
http://codeforces.com/contest/58/submission/24278906
http://codeforces.com/contest/58/submission/24278725
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

int main(){
	string s;
	cin >> s;
	int len = s.length();
	char ch[6] = "hello";
	int k = 0;
	for(int i=0; i<len; i++){
		if(s[i] == ch[k])
			k++;
	}
	if(k==5)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
		
	return 0;
}

/*
int findChar(string s, int start, int end, char c){
	for(int i=start; i<end; i++){
		if(s[i] == c)
			return i;
	}
	return -1;
}
int main() {
	string s;
	cin >> s;
	int len = s.length();
	bool flag = false;
	int index = findChar(s, 0, len, 'h');
	if(index != -1){
		index = findChar(s, index+1, len, 'e');
		if(index != -1){
			index = findChar(s, index+1, len, 'l');
			if(index != -1){
				index = findChar(s, index+1, len, 'l');
				if(index != -1){
					index = findChar(s, index+1, len, 'o');
					if(index != -1)
						flag = true;
				}
			}
		}
	}
	if(flag)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
	return 0;
}

*/
