#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - Function that prints all the elements of a dlistint_t
 * @h: Pointer to head node
 *
 * Return: Number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}

	return (count);
}
