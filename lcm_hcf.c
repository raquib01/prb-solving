// a*b = lcm(a,b)*hcf(a,b)
#include <stdio.h>
int main()
{
	int a, b, min, max, hcf, lcm;
	printf("Enter two num: ");
	scanf("%d %d", &a, &b);

	if (a > b)
	{
		max = a;
		min = b;
	}
	else
	{
		max = b;
		min = a;
	}

	for (int i = 1; i < min + 1; i++)
	{
		if (a % i == 0 && b % i == 0)
		{
			hcf = i;
		}
	}
	int temp = max;
	int i = 1;
	while (1)
	{
		if (max % a == 0 && max % b == 0)
		{
			printf("check\n");
			lcm = max;
			break;
		}
		i++;
		max = temp * i;
	}
	printf("hcf is %d and lcm is %d\n", hcf, lcm);
	return 0;
}