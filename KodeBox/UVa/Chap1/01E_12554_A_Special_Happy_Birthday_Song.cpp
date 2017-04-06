/*
Name : 12554 - A Special "Happy Birthday" Song
Problem : https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=3999
Solution : https://ideone.com/HYROdm
*/

#include <iostream>
#include <algorithm>
#include <cmath>
#include <climits>
#include <string>
#include <vector>
#include <list>
#include <stack>
#include <queue>
using namespace std;

string wishes[] = {"Happy", "birthday", "to", "you", "Happy", "birthday", "to", "you", "Happy", "birthday", "to", "Rujia", "Happy", "birthday", "to", "you"};

int main() {
	int n;
	cin >> n;
	string names[n];
	for(int i=0; i<n; i++)
		cin >> names[i];

	int count = 0;
	if(n<=16) count =1;
    else if(n<=32)count = 2;
    else if(n<=48)count = 3;
    else if(n<=64)count = 4;
    else if(n<=80)count = 5;
    else          count = 6;

	int k = 0;
	for(int c = 0; c < count; c++){
		for(int i=0; i<16; i++){
			if(k == n)
				k = 0;
			cout << names[k++] << ": " << wishes[i] << "\n";
		}
	}
	
	return 0;
}