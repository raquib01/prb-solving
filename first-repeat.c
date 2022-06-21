/*
	Find out the index of first repeating element in an array
	eg: 1, 3, 5, 5, 3, 2
	output is 1 bocos 3 is repeated and index of 3 is 1

	Approach:
	original arr: {3, 2, 0, 1}
	index arr: {2, 3, 1, 0}
	explanantion: first element 3 is at 0th position, therefore 3rd position we place 0

*/
#include <stdio.h>
int main()
{
	int arr[10] = {1, 3, 5, 5, 3, 2, 7, 8, 9, 7};
	int idx[10] = {[0 ... 9] = -1}; // initialising index arr with -1
	int minidx = 100;				// init minidx with some high number
	for (int i = 0; i < 10; i++)
	{
		if (idx[arr[i]] == -1) // if idx arr have -1, means num appears for the first time
		{
			idx[arr[i]] = i;
		}
		else // number appears before at idx[arr[i]]th position
		{
			if (idx[arr[i]] < minidx)
			{
				minidx = idx[arr[i]]; // maintaining minidx
			}
		}
	}
	printf("%d\n", minidx);

	return 0;
}