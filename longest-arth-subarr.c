/*
	Special Subarray:
		subarray having same difference between consecutive terms. (simply A.P)
		eg: 1, 3, 5, 7, 8, 9
			special subarrs: 1,3,5,7	| 7, 8, 9

	Q: find the len of longest special subarr
*/
#include <stdio.h>
int main()
{
	int arr[11] = {1, 3, 5, 7, 8, 9, 8, 7, 6, 5, 4};
	int n = 11;
	int pd = arr[1] - arr[0]; // potential difference
	int curr_len = 2;		  // subarr of 2 element is always a AP
	int max_len = 2;

	int j = 2;
	while (j < n)
	{
		if (pd == arr[j] - arr[j - 1])
		{
			curr_len++;
		}
		else
		{
			pd = arr[j] - arr[j - 1]; // reset pd
			curr_len = 2;			  // reset curr_len
		}
		max_len = curr_len > max_len ? curr_len : max_len; // update max len
		j++;
	}
	printf("%d\n", max_len);
}