#include<stdio.h>
#include<stdlib.h>
/*
Form the biggest possible Number from the given numeric string
eg: 52134 => 54321
*/

int cmpfun(const void* a, const void* b){
	return *(char*)b - *(char*)a;
}
int main(){
	char str[5] = "52134";
	qsort(str,5,sizeof(char),cmpfun);
	printf("%s\n",str);
	return 0;
}