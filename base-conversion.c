#include <stdio.h>
#include <math.h>
// use -lm flag for compilation
int decToBin(int n)
{
	int rem;
	int bin = 0;
	int i = 1;
	while (n)
	{
		rem = n % 2;
		n = n / 2;
		bin += (rem * i);
		i *= 10;
	}
	return bin;
}

int binToDec(int n)
{
	int rem;
	int dec = 0;
	int i = 0;
	while (n)
	{
		rem = n % 10;
		n = n / 10;
		dec += rem * pow(2, i);
		i++;
	}
	return dec;
}

int decToOct(int n)
{
	int rem;
	int i = 1;
	int oct = 0;
	while (n)
	{
		rem = n % 8;
		n = n / 8;
		oct += (rem * i);
		i *= 10;
	}
	return oct;
}

int octToDec(int n)
{
	int rem;
	int i = 0;
	int dec = 0;
	while (n)
	{
		rem = n % 10;
		n = n / 10;
		dec += rem * pow(8, i);
		i++;
	}
	return dec;
}

int main()
{
	printf("dec-bin: %d -> %d\n", 5, decToBin(5));
	printf("bin-dec: %d -> %d\n", 101, binToDec(101));

	printf("dec-oct: %d -> %d\n", 22, decToOct(22));
	printf("oct-dec: %d -> %d\n", 123, octToDec(123));
	return 0;
}