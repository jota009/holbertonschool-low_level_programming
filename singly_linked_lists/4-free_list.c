#include "lists.h"
#include <stdlib.h>

/**
 * free_list - Frees all nodes in a list_t linked list
 * @head: Pointer to the head of the list
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
