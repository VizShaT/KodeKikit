#include <cstdio>

using namespace std;

int N;
char x[110];

int main(){
	scanf("%d\n", &N);
	while(N--){
		scanf("0.%[0-9]...\n", &x);

		printf("The digits are 0.%s\n", x);
	}
}

/*
3
0.1227...
0.517611738...
0.7341231223444344389923899277...
*/