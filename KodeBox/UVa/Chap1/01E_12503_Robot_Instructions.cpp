/*
Name : 12503 - Robot Instructions
Problem : https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=3947
Solution : https://ideone.com/EGIrGD
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


int main() {
	int t, n, i;
	cin >> t;
	while(t--){
		cin >> n;
		int position = 0;
		vector<int> instructions;
		while(n--){
			string inst;
			cin >> inst;
			if(inst == "LEFT"){
				--position;
				instructions.push_back(-1);
			}else if(inst == "RIGHT"){
				++position;
				instructions.push_back(1);
			}else{
				cin >> inst >> i;
				position += instructions[i-1];
				instructions.push_back(instructions[i-1]);
			}
		}
		cout << position << "\n";
	}
	return 0;
}