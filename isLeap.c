#include <stdio.h>
/*
Recommendation: Watch Leap year explained by Neil Degrasse

short one:
if (year%4==0 && (year%100!=0 | year%400==0))
*/

int main()
{
	int year;
	scanf("%d", &year);

	int isLeap;
	if (year % 4 == 0)
	{ // if it is divisible by 4
		if (year % 100 == 0)
		{ // check if it is a century year
			if (year % 400 == 0)
			{ // check century year is divisible by 400
				isLeap = 1;
			}
			else
			{
				isLeap = 0;
			}
		}
		else
		{
			isLeap = 1;
		}
	}
	else
	{
		isLeap = 0;
	}

	printf("%d\n", isLeap);
	return 0;
}