#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * add_node - Fuction that adds a new node at the beginning of list_t
 * @head: Head pointer node
 * @str: String in list_t
 *
 * Return: Address of new node, NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *listpointer = NULL;

	listpointer = malloc(sizeof(list_t));
	if (listpointer == NULL)
	{
		free(listpointer);
		return (NULL);
	}
	if (!head)
	{
		(*head)->str = strdup(str);
		(*head)->next = NULL;
	}

	else
	{
		listpointer->next = *head;
		listpointer->len = strlen(str);
		listpointer->str = strdup(str);
	}

	*head = listpointer;

	return (*head);
}
