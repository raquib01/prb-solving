#include <stdio.h>
#include <math.h>
// use -lm flag for compilation
// cubes of digits are equal to the original number
int isArmstrong(int n)
{
	int sum = 0;
	int temp = n;
	int rem;
	while (n)
	{
		rem = n % 10;
		n = n / 10;
		sum += pow(rem, 3);
	}
	return sum == temp;
}
int main()
{
	int n = 153;
	printf("%d\n", isArmstrong(n));

	return 0;
}