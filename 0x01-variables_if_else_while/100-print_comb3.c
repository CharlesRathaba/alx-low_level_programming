#include <stdio.h>
/**
 * main - entry
 * Return: 0 (success)
 */

int main(void)
{
	int i, j; /*Take i and j as  2 possible digits*/

	/*loop through i, 1st digit, lowest of the 2, highest possible is 8*/
	for (i = 0; i <= 8; i++)
	{
		/*loop through j, 2nd digit, higher than j by 1,highest possible is 9*/
		for (j = i + 1; j <= 9; j++)
		{
			putchar(i + '0');
			putchar(j + '0');
			if (i == 8 && j == 9)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
