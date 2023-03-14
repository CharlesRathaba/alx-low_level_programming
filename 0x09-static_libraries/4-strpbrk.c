#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - Searches a string for any set of bytes
 * @s: string to search
 * @accept: set of bytes to search for
 *
 * Return: If a set is matched - a pointer to the matched byte.
 *         If no set is matched - NULL.
*/

char *_strpbrk(char *s, char *accept)
{
    int i;

    while (*s)
    {
        for (i = 0; accept[i]; i++)
        {
            if (*s == accept[i])
                return (s);
        }
        s++;
    }
    return (NULL);
}