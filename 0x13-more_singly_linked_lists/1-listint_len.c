#include "lists.h"
#include <stdio.h>

/**
 * listint_len - returns the number for elements in a linked list
 * @h: a pointer to the head of the list
 *
 * Return: The number of elements in listint_t list
 */

size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
