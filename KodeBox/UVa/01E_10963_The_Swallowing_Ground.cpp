/*
Name : 10963 - The Swallowing Ground
Problem : https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=1904
Solution : http://ideone.com/kQXIgc
*/

#include <iostream>
using namespace std;

int main() {
	int t, n, up, down;	
	cin >> t;
	while(t--){
		cin >> n;
		
		bool yes = true;
		cin >> up >> down;
		int d = up - down;
		
		for(int i=0; i < n-1; i++){
			cin >> up >> down;
			if(d != up - down)
				yes = false;
		}
		
		if(yes)
			cout << "yes\n";
		else
			cout << "no\n";
			
		if(t)
			cout << "\n";
	}
	return 0;
}