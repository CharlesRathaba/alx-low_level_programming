#include "main.h"

/**
 * binary_to_unit - converts a binary number to unsigned int
 * @b: pointer to a string of 0 and 1 chars
 *
 * Return: 0 if b is NULL or contains chars not 0 or 1
 *        else the coverted number
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int num = 0;

	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '0')
			num = num * 2;
		else if (b[i] == '1')
			num = num * 2 + 1;
		else
			return (0);
	}
	return (num);
}
