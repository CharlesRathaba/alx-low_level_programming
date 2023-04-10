#include <stdio.h>

/**
 * flip_bits - counts the number of bits needed to be
 *             flipped to get from one number to another
 * @n: the number
 * @m: the number to flip
 *
 * Return: the number of bits to flip to get from n to m
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m, bits = 0;

	while (xor > 0)
	{
		bits = bits + (xor & 1);
		xor >>= 1;
	}

	return (bits);
}
