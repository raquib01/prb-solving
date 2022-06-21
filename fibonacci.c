#include <stdio.h>
int fibonacci(int n)
{
	if (n == 1 || n == 2)
	{
		return n - 1;
	}
	int f1 = 0;
	int f2 = 1;
	int f3;
	for (int i = 2; i < n; i++)
	{
		f3 = f1 + f2;
		f1 = f2;
		f2 = f3;
	}
	return f3;
}

int recursiveFibonacci(int n)
{
	if (n == 1 || n == 2)
	{
		return n - 1;
	}
	return fibonacci(n - 1) + fibonacci(n - 2);
}
int main()
{
	int n;
	scanf("%d", &n);
	printf("%d", fibonacci(n));
	printf("%d \n", recursiveFibonacci(n));
	return 0;
}