/*
1
1 1
1 2 1
1 3 3 1
1 4 6 4 1

for ith row and jth col: value = iCj
iCj = i! / (i-j)! * j!
*/

#include <stdio.h>
int factorial(int n)
{
	int fac = 1;
	while (n)
	{
		fac = fac * n;
		n = n - 1;
	}
	return fac;
}
int main()
{
	int n = 5;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			printf("%d ", factorial(i) / (factorial(i - j) * factorial(j)));
		}
		printf("\n");
	}
	return 0;
}
