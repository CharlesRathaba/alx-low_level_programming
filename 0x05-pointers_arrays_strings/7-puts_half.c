#include "main.h"

/**
 * puts_half - print second half of a string
 * @str: The string
 *
 * Description: If odd number of chars, print (length - 1) / 2
 *
 * Return: void
 */

void puts_half(char *str)
{
	int i = 0, len = 0, n;

	while (str[i++])
		len++;

	if ((len % 2) == 0)
		n = len / 2;

	else
		n = (len + 1) / 2;

	for (i = n; i < len; i++)
		_putchar(str[i]);

	_putchar('\n');
}
