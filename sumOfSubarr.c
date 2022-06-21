// Calculate Sum of All possible Subarray
#include <stdio.h>
int main()
{
	int arr[10] = {1, 2, 3, 4, 5};
	int n = 5, sum;
	for (int i = 0; i < n; i++)
	{
		sum = 0;
		for (int j = i; j < n; j++)
		{
			sum += arr[j];
			printf("%d ", sum);
		}
	}

	return 0;
}