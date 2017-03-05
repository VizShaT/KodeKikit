/*
Name : 
Problem : 
Solution : 
*/

/*
* double : 64 bits
* long double : 80 bit (extension in g++ compiler)
* In most cases, double is enough, but long double is more accurate.
* 
*/
#include <bits/stdc++.h>

using namespace std;

int main(){
	double x = 1;
	printf("%.4f\n", x);

	double y = 0.3*3+0.1;
	printf("%.20f\n", y);   // 

	// It is risky to compare floating point numbers with the == operator, because it 
	// is possible that the values should be equal but they are not because of precision
	// errors. A better way to compare floating point numbers is to assume that two
	// numbers are equal if the difference between them is less than ε , where ε is a
	// small number.

	/*
	if (abs(a-b) < 1e-9) {
		// a and b are equal
	}
	*/

	// Note that while floating point numbers are inaccurate, integers up to a certain
	// limit can still be represented accurately. For example, using double , it is possible
	// to accurately represent all integers whose absolute value is at most 2^53 .

	return 0;
}