/*
http://ideone.com/fS328K
1.2.3.8
Generate all possible subsets of {0, 1, 2, . . . , N-1}, for N = 20.
*/

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int p[20], N = 20;
	for(int i=0; i<N; i++) p[i] = i;
	for(int i=0; i < (1 << N); i++){
		for(int j=0; j < N; j++){
			if(i & (1 << j))
				cout << p[j] << " ";
		}
		cout << "\n";
	}
	return 0;
}