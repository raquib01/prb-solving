// find prime num till n
// time complexity = nlog(logn)
#include<stdio.h>


void soe(int n){
	int prime[100] = {0};
	for(int i = 2; i*i<=n; i++){
		// if we want prime till 36...there is no need to cross out multiple of 7 becos it starts from 49 thats why loop ends at root n
		if(prime[i]==0){
			for(int j = i*i; j<=n; j+=i){// starting crossing out from isquare becos prev multiples are already crossed before..
				prime[j] = 1;
			}
		}
	}

	for(int i = 2; i<=n; i++){
		if(prime[i]==0){
			printf("%d, ",i);
		}
	}
	printf("\n");
}


int main(){
	int n;
	scanf("%d",&n);
	soe(n);
}