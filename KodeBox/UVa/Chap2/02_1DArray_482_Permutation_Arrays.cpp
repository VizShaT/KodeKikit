/*
Name : 482 - Permutation Arrays
Problem : https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=423
Solution : http://ideone.com/Fys9qd
*/

#include <iostream>
#include <cstdio>
#include <vector>
#include <sstream>
using namespace std;

int main() {
	int t;
	cin >> t;
	string line;
	getchar();
	while(t--){
		getchar();
		int index[5000], n = 1, i = 1;
		string arr[5000];
		
		getline(cin, line);
		stringstream ss;
		ss << line;
		while(ss >> index[n])
			n++;
		
		ss.clear();	
		getline(cin, line);
		ss << line;
		while(ss >> arr[index[i]])
			i++;
			
		for(int i=1; i<n; i++)
			cout << arr[i] << "\n";
			
		if(t)
			puts("");		
	}
	return 0;
}