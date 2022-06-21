//swapping of number without using third variable
#include <stdio.h>
int main()
{
	int a = 6;
	int b = 4;
	printf("a=%d, b=%d\n", a, b);
	a = a + b;
	b = a - b;
	a = a - b;
	printf("a=%d, b=%d\n", a, b);
	return 0;
}