#include "main.h"
/**
 * _strlen - A functions that returns the length of a string.
 * @s: The string to get its length.
 *
 * Return: The length of @s
*/

int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
		length++; /* Start from 0 */
	return (length);
}
