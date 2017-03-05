/*
Name : A Twins
Problem : http://codeforces.com/problemset/problem/160/A
Solution : http://codeforces.com/contest/160/submission/24259992
*/

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin >> n;
	int a[n], sum = 0;
	for(int i=0; i<n; i++){
		cin >> a[i];
		sum += a[i];
	}
	sort(a, a+n, greater<int>());
	int count = 0, value = sum;
	int i =0;
	float half = sum/2.0;
	while(value >= half){
			value -= a[i];
			count++;
			i++;
	}
	cout << count << endl;
	return 0;
}