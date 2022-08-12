// How many numbers between 1 - 100 are divisibe by 5 or 7
// eg: 5,10,15,20,25,30,35 => divisible by 5
// eg: 7,14,21,28,35 => divisible by 7
// 35 is counted twice, thats why c1+c2-c3
#include<stdio.h>
int main(){
	int n = 100;
	int a = 5;
	int b = 7;

	int c1 = n/a; //count of numbers divisible by a	
	int c2 = n/b; //count of numbers divisible by b	
	int c3 = n/(a*b); //count of numbers divisible by a and b

	printf("%d\n",c1+c2-c3);
	return 0;
}