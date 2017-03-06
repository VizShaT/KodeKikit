/*
Name : UVa 272 - TEX Quotes
Problem : https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=208
Solution : 
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
	bool first = false;
	char c;
	while((c = getchar()) != EOF){
		if(c == '"'){
			if(first = !first)
				fputs("``", stdout);
			else
				fputs("''", stdout);
		}else{
			putchar(c);
		}

	}
	return 0;
}