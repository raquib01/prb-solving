/*
Problem Statement:
Isiyana is given the num of visitor at theme park on N consecutive day

The ith day is record breaking only if
1. num of visitor is greater than num of visitor on each of the prev days
2. num of visitor is greater than num of visitor on the next day
eg: 1 2 3 [10] 5
3. conditon 2 will not be checked if its a last day

Output: No of Record Breaking Day
*/

#include<stdio.h>
int main(){

	int n;
	scanf("%d",&n);
	
	int arr[n+1];
	arr[n] = -1; // so that we cant get error while checking condition2 on last element


	for(int i = 0; i<n; i++){
		scanf("%d",&arr[i]);
	}

// brute force way...
/*
	int j;
	int counter = 0;
	int flag = 1;
	for(int i = 0; i<n; i++){
		if(arr[i]<=arr[i+1]){//if condition 2 if false
			continue;
		}
		j = i-1;
		while(j>=0){// checking 1 condition
			if(arr[j]>=arr[i]){
				flag = 0;
				break;
			}
			j--;
		}
		if(flag==1){
			counter++;
		}
	}
*/
	int max = -1;
	int counter = 0;

	for(int i = 0; i<n; i++){
		if(arr[i]>arr[i+1] && arr[i]>max){
			counter++;
		}
		if(max<arr[i]){
			max = arr[i];
		}
	
}
	printf("%d\n",counter);
}