#include<iostream>
using namespace std;

int main(){
	int t, n, x, y, num;
	cin >> t;
	while(t--){
		cin >> n >> x >> y;
		int arr[n];
		for(int i=0; i<n; i++)
			cin >> arr[i];
		
		bool easy = false, hard = false;
		if(arr[0] == x)
			easy = true;
		if(arr[n-1] == y)
			hard = true;
			
		if(easy == true && hard == true)
			cout << "BOTH" << endl;
		else if(easy == true && hard == false)
			cout << "EASY" << endl;
		else if(easy == false && hard == true)
			cout << "HARD" << endl;
		else if(easy == false && hard == false)
			cout << "OKAY" << endl;
	}
}
