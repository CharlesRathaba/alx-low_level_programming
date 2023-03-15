#include "main.h"
#include <stdio.h>

/**
 * _strchr - Locates a character in a string.
 * @s: string to search
 * @c: character to locate
 *
 * Return: If c is found - a pointer to the first occurence.
 *         If c is not found - NULL.
*/

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (c == *s)
		{
			return (s);
		}
	s++;
	}
	if (!c)
		return (s);
	return (NULL);

}
