#include<stdio.h>
int main(){
	int arr[5][5] = {
		{1,2,3,4,5},
		{6,7,8,9,10},
		{11,12,13,14,15},
		{16,17,18,19,20},
		{21,22,23,24,25}
	};

	int temp;
	for(int i = 0; i<5; i++){
		for(int j = i+1; j<5; j++){// j should be > than i means (upper triangle)
			temp = arr[i][j];
			arr[i][j] = arr[j][i];
			arr[j][i] = temp;

		}
	}

	for(int i = 0; i<5; i++){
		for(int j = 0; j<5; j++){
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}