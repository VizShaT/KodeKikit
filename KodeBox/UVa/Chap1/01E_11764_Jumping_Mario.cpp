/*
Name : 11764 - Jumping Mario
Problem : https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=2864
Solution : http://ideone.com/Giyk7J
*/

#include <iostream>
using namespace std;

int main() {
	int t, n, c = 0;
	cin >> t;
	while(t--){
		cin >> n;
		int a[n];
		for(int i=0; i<n; i++)
			cin >> a[i];
			
		int low =0, high = 0;
		for(int i=0; i<n-1; i++){
			if(a[i] < a[i+1])
				high++;
			else if(a[i] > a[i+1])
				low++;
		}
		
		cout << "Case " << ++c << ": " << high << " " << low << "\n";
	}
	return 0;
}