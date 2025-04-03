#include "lists.h"
#include <stdio.h>

/**
 * dlistint_len - Returns the number of elements of dlistint_t list
 * @h: Header node pointer
 *
 * Return: Number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
