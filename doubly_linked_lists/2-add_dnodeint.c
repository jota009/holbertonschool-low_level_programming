#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - Adds a new node at the beginning of dlistint_t
 * @head: Head node pointer
 * @n: Integer value to store in the new node
 *
 * Return: Address of new element, NULL if failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newdNode = malloc(sizeof(dlistint_t));

	if (newdNode == NULL)
	{
		return (NULL);
	}

	newdNode->n = n;
	newdNode->prev = NULL;
	newdNode->next = *head;

	if (*head != NULL)
	{
		(*head)->prev = newdNode;
	}

	(*head) = newdNode;

	return (newdNode);
}
