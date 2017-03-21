/*
Name : 12468 - Zapping
Problem : https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=3912
Solution : https://ideone.com/w16Ljm
*/

#include <iostream>
#include <algorithm>
#include <cmath>
#include <climits>
#include <string>
#include <vector>
#include <list>
#include <stack>
#include <queue>
using namespace std;


int main() {
	int a, b;
	while(cin >> a >> b, a != -1, b != -1){
		int d1, d2;
		if(a < b){
			d1 = b - a;
			d2 = a + (100-b);
		}			
		else{
			d1 = a - b;
			d2 = (100-a) + b;
		}
					
		if(d1 > d2)
			cout << d2 << "\n";
		else
			cout << d1 << "\n";
	}
	return 0;
}