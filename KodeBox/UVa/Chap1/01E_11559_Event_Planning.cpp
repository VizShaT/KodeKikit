/*
Name : 11559 - Event Planning
Problem : https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=2595
Solution : http://ideone.com/7lyGPf
*/

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	int n, b, h, w, p, a, minCost;
	while (scanf("%d %d %d %d\n", &n, &b, &h, &w) != EOF) {
		minCost = 2000000000;
		while (h--) {
			cin >> p;
			for(int i=0;i<w;i++) {
				cin >> a;
				if (a >= n) {
					minCost = min(minCost,n * p);
					string s;
					getline(cin, s);
					break;
				}
			}
		}
		if (minCost != 2000000000 && minCost <= b)
			cout << minCost << endl;
		else
			cout << "stay home" << endl;
	}

	return 0;
}