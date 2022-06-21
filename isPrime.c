#include <stdio.h>
#include <math.h>
// use -lm flag for compilation
int isPrime(int n)
{
	if (n == 1)
	{
		// becos 1 is neither prime nor composite
		return -1;
	}

	for (int i = 2; i <= sqrt(n); i++)
	// becos after sqrt(n), factors will repeat itself, eg: 2x8, 4x4, 8x2
	{
		if (n % i == 0)
		{
			return 0;
		}
	}
	return 1;
}
int main()
{
	int n = 52;
	printf("%d \n", isPrime(n));
	return 0;
}