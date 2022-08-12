#include<stdio.h>
int euclidean(int a, int b){
	
	if(b==0){
		return a;
	}
	return euclidean(b,a%b);
}
int main(){
	int a,b;
	scanf("%d %d",&a,&b);
	if(a<b){// a should be > b
		a = a + b;
		b = a - b;
		a = a - b;
	}
	printf("%d",euclidean(a,b));
	return 0;
}

// also a*b = gcd(a,b) * lcm(a,b)