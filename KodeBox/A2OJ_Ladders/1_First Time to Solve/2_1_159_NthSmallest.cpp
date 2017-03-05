#include<iostream>
#include<limits>
#include<algorithm>
using namespace std;

int main(){
	int t, x;
	cin >> t;
	int a[10];
	while(t--){
		for(int i=0; i<10; i++){
			cin >> a[i];
		}
		sort(a, a+10);
		cout << a[1] << endl;
	}
	
}
