#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - alloctates memory using mallloc
 * @b: number of memory bytes to allocate
 *
 * Return: pointer to the alloctated memory or exit with static 98
 */


void *malloc_checked(unsigned int b)
{
	void *memory;

	memory = malloc(b);
	if (memory == NULL)
		exit(98);
	return (memory);
}
