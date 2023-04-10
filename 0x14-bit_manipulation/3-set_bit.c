#include "main.h"

/**
 * set_bit - sets the value of a bit at a given index to 1
 * @n: a pointer to the bit to set
 * @index: The index to set the value of bit
 *
 * Return: 1, else -1 if error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int set;

	if (index > sizeof(unsigned long int) * 8)
		return (-1);

	set = 1 << index;
	*n = *n | set;

	return (1);
}
