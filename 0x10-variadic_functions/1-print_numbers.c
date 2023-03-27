#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - print numbers
 * @separator: separator string to print between numbers
 * @n: number of numbers to print
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int number;
	va_list list;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		number = va_arg(list, int);
		printf("%d", number);

		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(list);
}
