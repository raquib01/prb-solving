// count no. of 1s in binary system, eg: 101 have 2 '1s'
// refer to 'ispower-of-2.c' for explanantion
#include<stdio.h>
int main(){
	int n = 38;
	int count = 0;
	while(n){
		n = n & (n-1);
		count++;
	}
	printf("%d\n",count);
	return 0;
}