#include "main.h"

/**
 * clear_bit - sets the value of a bit at a given index to 0
 * @n: a pointer to the bit
 * @index: the index to set the value at
 *
 * Return: 1 if success, else -1
 */

int clear_bit(unsigned long int *n, unsigned index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n = *n & ~(1 << index);
	
	return (1);
}
