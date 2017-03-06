/*
http://ideone.com/2E0lnd

1.2.3.02
Given an integer n (n ≤ 15), print π to n digits after the decimal point (rounded).
(e.g. for n = 2, print 3.14; for n = 4, print 3.1416; for n = 5, prints 3.14159.)
*/

#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main() {
	// your code goes here
	int n;
	scanf("%d", &n);
	while(n--){
		double pi = 2 * acos(0.0);
		printf("%.*lf\n", n+1, pi);
	}
	return 0;
}