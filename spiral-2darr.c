#include<stdio.h>
int main(){
	int arr[6][8] = {
		{1, 2, 3, 4, 5, 6, 7, 8},
		{9, 10, 11, 12, 13, 14, 15, 16},
		{17, 18, 19, 20, 21, 22, 23, 24},
		{25, 26, 27, 28, 29, 30, 31, 32},
		{33, 34, 35, 36, 37, 38, 39, 40},
		{41, 42, 43, 44, 45, 46, 47, 48},
	};

	int row_start = 0;
	int row_end = 6-1;
	int col_start = 0;
	int col_end = 8-1;

	while(row_start <= row_end && col_start <= col_end){// till we have atleast 1 row or 1 col
		// top row
		for(int col = col_start; col<=col_end; col++){
			printf("%d  ",arr[row_start][col]);
		}
		row_start++;

		// right col
		for(int row = row_start; row<=row_end; row++){
			printf("%d  ",arr[row][col_end]);
		}
		col_end--;

		// bottom row
		for(int col = col_end; col>=col_start; col--){
			printf("%d ",arr[row_end][col]);
		}
		row_end--;

		// left col
		for(int row = row_end; row>=row_start; row--){
			printf("%d  ",arr[row][col_start]);
		}
		col_start++;
	}
	return 0;
}