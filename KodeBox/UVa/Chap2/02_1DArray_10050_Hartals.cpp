/*
Name : 10050 - Hartals
Problem : https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=991
Solution : http://ideone.com/XrZMZh
*/

#include <iostream>
using namespace std;

int main() {
	int t, d, n, x;
	cin >> t;
	while(t--){
		cin >> d >> n;
		bool hartal[d+1];
		for(int i=0; i<d; i++)
			hartal[i] = false;
		for(int i=1; i<=n; i++){
			cin >> x;
			for(int i=x; i<=d; i+=x){
					hartal[i] = true;
			}
			for(int i=6; i<=d; i+=7){
					hartal[i] = false;
					hartal[i+1] = false;
			}
		}
		int count = 0;
		for(int i=1; i<=d; i++){
			//cout << hartal[i] << " ";
		
			if(hartal[i])
				count++;
		}
		cout << count << "\n";
	}
	return 0;
}