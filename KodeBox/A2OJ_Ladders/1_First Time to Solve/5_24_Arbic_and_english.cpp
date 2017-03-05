#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
	int t, n;
	string word;
	cin >> t;
	while(t--){
		cin >> n;		
		vector<string> v;
		while(n--){
			cin >> word;
			v.push_back(word);
		}
		
		int index = 0, j;
		int len = v.size();
		for(j=0; j<len; j++){
			if(v[j][0] != '#'){
				index = j;
				break;
			}				
		}
		if(j != len){
			for(int i=index+1;i<len; i++)
				cout << v[i] << " ";
			cout << v[index] << " ";
			for(int i=0;i<index; i++)
				cout << v[i] << " ";
		}else{
			for(int i=0;i<len; i++)
				cout << v[i] << " ";
		}
		
	}
}
