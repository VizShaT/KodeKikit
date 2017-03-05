/*
Name : A. Arrival of the General
Problem : http://codeforces.com/problemset/problem/144/A
Solution : http://codeforces.com/contest/144/submission/25000210
*/

#include <iostream>
#include <algorithm>
#include <climits>
#include <string>
#include <vector>
#include <list>
#include <stack>
#include <queue>
using namespace std;


int main() {
	int n;
	cin >> n;
	int a[n];
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	int max = INT_MIN, min = INT_MAX;
	int maxIndex, minIndex;
	for(int i=0; i<n; i++){
		if(a[i] <= min){
			min = a[i];
			minIndex = i;
		}
	}
	for(int i=n-1; i>=0; i--){
		if(a[i] >= max){
			max = a[i];
			maxIndex = i;
		}
	}
	int count = maxIndex - 1 + n - minIndex;
	if(maxIndex > minIndex)
		count--;

	cout << count << endl;
	return 0;
}

/*
Logic used :
number of leftmost soldier with the maximum height - 1 + n - number of rightmost soldier with the minimum height. 
And if the leftmost soldier with the maximum height is more right then the rightmost soldier with the minimum height we should subtract one from the answer.

Best Solution on codeforces: http://codeforces.com/contest/144/submission/16555010
#include<iostream>
int n,i,p,q=99,x,a,b;
main(){
for(std::cin>>n;i++<n;)
	std::cin>>x,x>p?p=x,b=i:0,x<=q?q=x,a=i:0;

	std::cout<<b+n-a-1-(b>a);
}

*/