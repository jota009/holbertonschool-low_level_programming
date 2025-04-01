#include "lists.h"

/**
 * list_len - Returns the number of elements in a linked list_t list
 * @h: Pointer node of the linked list
 *
 * Return: Number of list_t elements
 */

size_t list_len(const list_t *h)
{
	int value = 0;

	while (h != NULL)
	{
		value++;
		h = h->next;
	}

	return (value);
}
