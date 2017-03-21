/*
Name : 01E_12015_Google_is_Feeling_Lucky
Problem : https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=3166
Solution : http://ideone.com/hugngO
*/

#include <iostream>
#include <utility>
#include <queue>
using namespace std;

char names[10][110];
priority_queue<pair<int, int>> pq;

int main() {
	int t, p, count = 1;
	cin >> t;
	while(t--){
		cout << "Case #" << count++ << ":\n";
		for(int i=0; i<10; i++){
			cin >> names[i] >> p;
			pq.push(pair<int, int>(p, -i));
		}
		p = pq.top().first;
		
		while(pq.top().first == p){
			cout << names[-pq.top().second] << "\n";
			pq.pop();
		}
		while(!pq.empty()) pq.pop();
	}
	return 0;
}