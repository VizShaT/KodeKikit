/*
Name : 11608 - No Problem
Problem : https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=2655
Solution : http://ideone.com/4SulgT
*/

#include <iostream>
using namespace std;

int main() {
	int n, t=1;
	while(cin >> n, n >= 0){
		cout << "Case " << t << ":\n";
		int created[13], required[13], available;
		for(int i=1; i<=12; i++){
			cin >> created[i];
		}
		for(int i=1; i<=12; i++){
			cin >> required[i];
		}
		
		available = n;
		
		for(int i=1; i<=12; i++){
			if(required[i] <= available){
				cout << "No problem! :D\n";
				available -= required[i];
			}
			else{
				cout << "No problem. :(\n";
			}
			available += created[i];
		}
		++t;
	}
	return 0;
}