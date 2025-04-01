#include "lists.h"
#include <stdio.h>


/**
 * print_list - Prints all the elements of a list_t list
 * @h: Pointer node of linked list
 *
 * Return: Number of nodes in list_t
 */

size_t print_list(const list_t *h)
{
	int value = 0;

	for (; h; value++)
	{
		if (!h->str)
		{
			printf("[0] (nil)\n");
			h = h->next;
		}

		else
		{
			printf("[%u] %s\n", h->len, h->str);
			h = h->next;
		}
	}
	return (value);
}
