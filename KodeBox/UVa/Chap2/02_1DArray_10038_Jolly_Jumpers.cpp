/*
Name: 10038 - Jolly Jumpers
Problem : https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=979
Solution : http://ideone.com/5Q8TtB
*/

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n;
	while(cin >> n){
		int a[n];
		for(int i=0; i<n; i++)
			cin >> a[i];
		
		int diff[n];
		int k = 1;
		for(int i=1; i<n; i++){
			diff[k++] = abs(a[i] - a[i-1]);
		}
		
		sort(diff+1, diff+k);
		
		bool flag = true;
		for(int i=1; i<k; i++){
			if(diff[i] != i){
				flag = false;
				break;
			}
			
		}
		if(!flag)
			cout << "Not jolly\n";
		else
			cout << "Jolly\n";
	}
	return 0;
}