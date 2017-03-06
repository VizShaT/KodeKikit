/*
http://ideone.com/lChNVv
1.2.3.6
Given a list of sorted integers L of size up to 1M items, determine whether a value v
exists in L with no more than 20 comparisons
*/

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n = 5;
	int a[] = {10, 7, 5, 20, 8};
	int v = 20;
	
	sort(a, a+n);
	cout << binary_search(a, a+n, v);
	
	return 0;
}