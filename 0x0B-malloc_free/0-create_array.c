#include "main.h"
#include <stdlib>

/**
 * create_array - creates an array of chars
 * @size: size of the array to be created
 * @c: char to initialize array with
 *
 * Return: pointer to  the array or NULL if malloc fails/ size == 0
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	if (size == 0)
		return (NULL);

	arr = malloc(size * sizeof(char));
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = c;
	return (arr);
}
