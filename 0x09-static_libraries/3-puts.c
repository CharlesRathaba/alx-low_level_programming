#include "main.h"
#include <stdio.h>
/**
 * _puts - prints a string, followed by a new line,
 * @str: pointer to the string to print
 * Return: void
*/

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
