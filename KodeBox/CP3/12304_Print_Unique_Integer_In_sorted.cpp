/*
http://ideone.com/IwUX6f
1.2.3.04
Given n random integers, print the distinct (unique) integers in sorted order.
*/

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

#define ALL(x) x.begin(), x.end()
#define UNIQUE(c) (c).resize(unique(ALL(c)) - (c).begin())

int main() {
	int a[] = {1, 2, 2, 2, 3, 3, 2, 2, 1};
	vector<int> v(a, a+9);
	sort(ALL(v));
	UNIQUE(v);
	for(int i=0; i<(int)v.size(); i++)
		cout << v[i] << " ";
	return 0;
}