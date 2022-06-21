/*
	Subarray: continuous part of the larger array
		total possible subarray: nC2 + n
		How: 	total ways of selecting first and last element of subarray: nC2
				subarray can be of one element: n

	Subsequence: non-continuous part of the larger array, provided order remains same
		total possible subsequence: 2^n
		How: every element has two possiblility, it is a part of subsequence or it is not: 2^n
*/
#include <stdio.h>
int main()
{
	int arr[5] = {1, 22, 3, 44, 50};
	for (int i = 0; i < 5; i++) // for starting point
	{
		for (int j = i; j < 5; j++) // for ending point
		{
			for (int k = i; k <= j; k++) // printing from start to end
			{
				printf("%d ", arr[k]);
			}
			printf("\n");
		}
	}
	return 0;
}