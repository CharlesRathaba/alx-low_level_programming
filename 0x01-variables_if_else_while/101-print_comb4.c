#include <stdio.h>
/**
 * main - entry point
 * Return: 0 (success)
 */

int main(void)
{
	int i, j, k;

	/*loop through i,1st digit,lowest of the 3.highest possible is 7*/
	for (i = 0; i <= 7; i++)
	{
		/*loop through j, 2nd digit, higher than i by 1. highest possible is 8*/
		for (j = i + 1; j <= 8; j++)
		{
			/*loop through k, 3rd digit, higher than j by 1. highest possible is 9*/
			for (k = j + 1; k <= 9; k++)
			{
				putchar(i + '0');
				putchar(j + '0');
				putchar(k + '0');
				/*continues to put coma,space,stop if last highest combination is met*/
				if (i == 7 && j == 8 && k == 9)
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
