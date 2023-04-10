#include <stdio.h>

/**
 * get_bit - Return the value of a bit at a given index
 * @n: the bit
 * @index: index to get the value at
 *
 * Return: -1 if error, else the value of the bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	return ((n >> index) & 1);
}
