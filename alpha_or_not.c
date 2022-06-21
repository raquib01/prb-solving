//given char is alphabet or not
#include <stdio.h>
int main()
{
	char c;
	printf("Enter the char: ");
	scanf("%c", &c);
	if (c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z')
	{
		printf("Its an alphabet\n");
	}
	else
	{
		printf("Not an alphabet\n");
	}
	return 0;
}