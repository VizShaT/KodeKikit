/*
Name : 01E_11942_Lumberjack_Sequencing
Problem : https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=3093
Solution : http://ideone.com/Y96PGb
*/

#include <iostream>
using namespace std;

int main() {
	int t, p, q;
	cin >> t;
	cout << "Lumberjacks:\n";
	while(t--){
		cin >> p;
		bool insc = false, desc = false;
		for(int i=0; i<9; i++){
			cin >> q;
			if(p < q)
				insc = true;
			else
				desc = true;
				
			p = q;
		}
		if(insc && desc)
			cout << "Unordered\n";
		else
			cout << "Ordered\n";
	}
	return 0;
}