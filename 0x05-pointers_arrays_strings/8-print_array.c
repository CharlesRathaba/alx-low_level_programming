#include <stdio.h>
#include "main.h>

/**
 * print_array - Prints a given number of elements of an array
 * @a: The array
 * @n: The number to print
 * Description: Numbers must be separated by comma and space.
 * Numbers should be displayed in the same order they are stored in array.
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
			printf(", ");
	}
	printf("\n");
}
