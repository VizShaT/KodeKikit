/*
Name : UVa 12279 - Emoogle Balance
Problem: https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=3431
Solution : http://ideone.com/nvYc3O
*/

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n, x, k = 1;
	while(cin >> n, n != 0){
		int count = 0;
		for(int i=0; i<n; i++){
			cin >> x;
			if(x == 0)
				count++;
		}
		cout << "Case "<< k << ": " <<n - 2*count << "\n";
		k++;
	}
	return 0;
}