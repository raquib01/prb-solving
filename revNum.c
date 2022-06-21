#include <stdio.h>
int revNum(int n)
{
	int rem;
	int rev = 0;
	while (n)
	{
		rem = n % 10;
		n = n / 10;
		rev = (rev * 10) + rem;
	}
	return rev;
}
int main()
{
	int n = 123;
	printf("%d\n", revNum(n));
	return 0;
}