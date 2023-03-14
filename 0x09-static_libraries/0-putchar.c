#include <stdio.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: 1 on success
 * On error, -1 is returned
*/

int _putchar(char c)
{
	return(fputc(c, stdout));
}
