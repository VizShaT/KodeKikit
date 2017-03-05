#include<iostream>
using namespace std;

int main(){
	int t, n, k, x;
	cin >> t;
	while(t--){
		cin >> n >> k;
		int count = 0;
		while(n--){
			cin >> x;
			count += (x / k);
		}
		cout << count << endl;
	}
}
