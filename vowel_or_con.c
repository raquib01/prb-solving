//Find out that the given char is vowel or consonant
#include <stdio.h>
#include <ctype.h>
int main()
{
	char c;
	printf("Enter the char: ");
	scanf("%c", &c);
	c = tolower(c);
	char vowel[5] = {'a', 'e', 'i', 'o', 'u'};
	int is_vowel = 0;
	for (int i = 0; i < 5; i++)
	{
		if (c == vowel[i])
		{
			is_vowel = 1;
			break;
		}
	}

	if (is_vowel)
	{
		printf("Its a vowel\n");
	}
	else
	{
		printf("Its a consonant\n");
	}

	return 0;
}