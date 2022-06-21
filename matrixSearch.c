/*
Search a given element in a matrix
provided, elements in the matrix is sorted both row wise and col wise
eg: 1 2 3
	4 5 6
	7 8 9
*/

#include<stdio.h>
int main(){
	int arr[3][3] = {
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9}
	};

	int x; // finding x
	scanf("%d",&x);
	/*
	possible ways to start:
	1. top right
	2. bottom left
	becos in these two pos, we can move to smaller element or larger element
	*/

	// starting from top right position
	int m = 0, n = 2;
	int exists = 0;
	while(m<3 && n>=0){
		if(arr[m][n] == x){
			printf("%d is found at %d,%d\n",x,m,n);
			exists = 1;
			break;
		}
		else if( x > arr[m][n]){
			// move down
			m++;
		}
		else{
			// move left
			n--;
		}
	}

	if(!exists){
		printf("Not Found\n");
	}
	
	return 0;
}