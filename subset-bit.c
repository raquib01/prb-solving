/*
	Finding all possible subset of a array
	eg:
	'a','b','c'
	if we print binaries from 0 to (2^n -1)	=> (no of subset possible ie 2^n)
	000		=>	{}
	001		=>	{'c'}
	010		=>	{'b'}
	011		=>	{'b','c'}
	100		=>	{'a'}
	101		=>	{'a','c'}
	110		=>	{'a','b'}
	111		=>	{'a','b','c'}


*/
#include<stdio.h>
int main(){
	int n = 3;
	char arr[4] = {'a','b','c'};

	for(int i = 0; i<(1<<n); i++){ //loop for 2^n elements
		for(int j = 0; j<n; j++){
			if(i & (1<<j)){ // checking jth bit in i
				printf("%c ",arr[j]);
			}
		}
		printf("\n");
	}
	return 0;
}