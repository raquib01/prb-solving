#include<stdio.h>
int getbit(int n,int pos){
	return ((n & 1<<pos)!=0);
}

int setbit(int n, int pos){
	return n | 1<<pos;
}

int clearbit(int n, int pos){
	return n & ~(1<<pos);
}

int updatebit(int n, int pos, int bit){
	n = n & ~(1<<pos);
	return n | bit<<pos;
}
int main(){
	int n = 5; // 101
	int i = 1;
	printf("get bit: %d\n",getbit(n,i));
	printf("set bit: %d\n",setbit(n,i));

	i = 0;
	printf("clear bit: %d\n",clearbit(n,i));
	printf("update bit: %d\n",updatebit(n,i,0));
	printf("update bit: %d\n",updatebit(n,i,1));
	return 0;
}