/*
Q: find the first missing positive integer from the arr
eg: {-9, 0, 3, 1, 9}
output: 2
*/

#include <stdio.h>
int main()
{
	int arr[5] = {-9, 0, 2, 1, 9};
	int indx[9] = {[0 ... 8] = 0}; // initialising index arr with zero (false)

	for (int i = 0; i < 5; i++)
	{
		if (arr[i] >= 0)
		{
			indx[arr[i]] = 1; // means visited
		}
	}

	for (int i = 0; i < 5; i++)
	{
		if (indx[i] == 0)
		{
			printf("%d \n", i);
			break;
		}
	}
	return 0;
}