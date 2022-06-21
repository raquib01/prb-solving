#include<stdio.h>
// Find two element such that sum should be equal to given number in O(n)

int bruteApproach(int* arr, int k){ // if arr in not sorted
	int n = 10;
	// brute force approach
	for(int i = 0; i<n; i++){
		for(int j = i+1;j<n;j++){
			if(arr[i] + arr[j] == k){
				printf("%d %d\n",arr[i],arr[j]);
				return 1;
			}
		}

	}
	return 0;
}

int betterApproach(int* arr, int k){ // if arr is sorted already
	int n = 10;
	int low = 0;
	int high = n-1;
	int sum;
	while(low<high){// till we have atleast 2 element
		sum = arr[low] + arr[high];
		if(sum == k){
			printf("%d %d\n",arr[low], arr[high]);
			return 1;
		}
		if(sum>k){
			high--;
		}
		else{
			low++;
		}
	}
	return 0;
}

int main(){
	int arr[10] = {2,5,9,12,22,28,29,36,39,40};
	int n = 10; //size
	int k = 62; // i.e 22 and 39 at [4] and [8]

	printf("brute approach %d\n",bruteApproach(arr,k));
	printf("better approach %d\n",betterApproach(arr,k));

	return 0;
}