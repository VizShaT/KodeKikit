/*
Name : 11332 - Summing Digits
Problem : https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=2307
Solution : http://ideone.com/u67yUA
*/

#include <iostream>
using namespace std;

int digit(long long n){
	int sum = 0;
	while(n != 0){
		sum += n % 10;
		n /= 10;
	}
	return sum;
}
int main() {
	// your code goes here
	long long n;
	while(cin >> n, n != 0){
		while(n > 9){
			n = digit(n);
		}
		cout << n << endl;
	}
	return 0;
}