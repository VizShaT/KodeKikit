/*
Name : 414 - Machined Surfaces
Problem : https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=355
Solution : http://ideone.com/NYyjI2
*/

#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
	int n;
	while(cin >> n, n != 0){
		cin.ignore();
		
		int minSpaces = -1;
		vector<int> spaces(n);
		
		string s;
		for(int i=0; i<n; i++){
			getline(cin, s);
			int count = 0;
			for(int j=0; j <25; j++){
				if(s[j] != 'X')
					count++;
			}
			spaces[i] = count;
			if(count < minSpaces | minSpaces == -1)
				minSpaces = count;
		}
		
		int totalSpace = 0;
		for(int i=0; i<n; i++)
			totalSpace += spaces[i] - minSpaces;
		cout << totalSpace << "\n";
	}
	return 0;
}