#include<stdio.h>

void primefactor(int n){
	int spf[100]; // smallest prime factor

	// initialising with i, spf[2] = 2
	// becos spf[p] = p, where p-> prime num
	for(int i = 2; i<=n; i++){
		spf[i] = i;
	}

	for(int i = 2; i*i<=n; i++){
		if(spf[i]==i){
			for(int j = i*i; j<=n; j+=i){
			// instead of crossing out "arr[j]=0" like in sieveofErotosthenes
			// we put i, eg: 2 => 4,6,8,10 so spf[4]=2, spf[6] = 2
				if(spf[j]==j){
					spf[j] = i;
				}
			}

		}
	}

	while(n!=1){
		printf("%d\n",spf[n]);
		n = n/spf[n];
	}

}

int main(){
	int n;
	scanf("%d",&n);

	primefactor(n);	
	return 0;
}