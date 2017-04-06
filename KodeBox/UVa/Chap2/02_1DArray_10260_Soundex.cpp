/*
Name : 10260 - Soundex
Problem : https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=1201
Solution : http://ideone.com/VDIrCK
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	int sd[100];
	sd['B']=1;
    sd['F']=1;
    sd['P']=1;
    sd['V']=1;

    sd['C']=2;
    sd['G']=2;
    sd['J']=2;
    sd['K']=2;
    sd['Q']=2;
    sd['S']=2;
    sd['X']=2;
    sd['Z']=2;

    sd['D']=3;
    sd['T']=3;

    sd['L']=4;

    sd['M']=5;
    sd['N']=5;
    sd['R']=6;
    
    while(cin >> s){
    	int len = s.length();
    	for(int i=0; i<len; i++){
    		if(s[i] != 'A' &&  s[i] != 'E' && s[i] != 'I' && s[i] != 'O' && s[i] != 'U' && s[i] != 'H' && s[i] != 'W' && s[i] != 'Y'){
    			if(sd[s[i]] != sd[s[i-1]])
    				cout << sd[(s[i])];
    		}
    	}
    	cout << "\n";
    }
	return 0;
}