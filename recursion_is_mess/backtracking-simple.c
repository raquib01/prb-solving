// simple backtracking approach
#include<stdio.h>

void asc(int n){
	if(n==0){
		return;
	}
	asc(n-1);
	printf("%d, ",n);
	return;
}

void des(int n){
	if(n>10){
		return;
	}
	des(n+1);
	printf("%d, ",n);
	return;
}

int main(){
	// printing number for 1 - N(ascending)
	int n = 10;
	printf("printing ascending\n");
	asc(n);

	// printing number by N - 1(descending)
	printf("\nprinting descending\n");
	des(1);
	return 0;
}