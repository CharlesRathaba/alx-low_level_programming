#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates two strings
 * @s1: string to be joined to
 * @s2: string to join s1
 *
 * Return: pointer to newly allocated space in memory
 *         containing concatenated string , or NULL if error
 *         in concatenating
 */
char *str_concat(char *s1, char *s2)
{
	char *join;
	int copy = 0;
	int length = 0;

	if (s1 == NULL)
		s1 = "";

	if (s1 == NULL)
		s2 = "";

	length = strlen(s1) + strlen(s2);

	join = malloc(sizeof(char) * (length));
	if (join == NULL)
		return (NULL);

	while (*s1 != '\0')
		join[copy++] = *s1++;

	while (*s2 != '\0')
		join[copy++] = s2[i];

	join[copy] = '\0';

	return (join);
}
