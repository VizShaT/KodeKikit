#include<iostream>
#include<string>
using namespace std;

int main(){
	int t;
	string s;
	cin >> t;
	while(t--){
		cin >> s;
		int count[26] = {0};
		int len = s.length();
		for(int i=0; i<len; i++)
			count[s[i] - 'a']++;
		
		int max = 0, index = 0;
		for(int i=0;i < 26; i++){
			if(count[i] > max){
				max = count[i];
				index = i;
			}				
		}
		cout << max << " " << char(index + 'a') << endl;
	}
}
