// note: corner case exists: if n == 0, not added
#include<stdio.h>
int traditionalWay(int n){
	// just run the application and you will understand
	while(n%2 == 0 && n!=2){ // till n is multiple of 2 and not 2
			n = n/2;
			printf("%d\n",n);
		}

		if(n==2){
			printf("power of 2\n");
		}
		else{
			printf("not a power of 2\n");
		}
}

int bitway(int n){
	/*
	if n is power of 2, it will have only 1 '1' and rest '0'
		eg: 2	=> 10
			4	=> 100
			8	=> 1000
			16	=> 10000

	lets assume n = 20 => 10100
	19 will be => 10011
	here we see a pattern,
	if we swap all digits of n from right till first occuring '1', it will be n-1 

	then if we do n & n-1
	eg: 8
		1000
		0111
		-----
		0000 if it is a power of 2

		note(not related to this question):
			if not a power of 2, only rightmost 1 is different
				eg: 11010 => 26
					11001 => 25
					-----
					11000 compare it with 11010(26) only rightmost 1 is changed to '0'
	*/
	return (n & n-1)==0;
}
int main(){
	int n;
	scanf("%d",&n);
	traditionalWay(n);
	printf("%d\n",bitway(n));
	
	return 0;
}