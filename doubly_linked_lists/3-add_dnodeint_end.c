#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_dnodeint_end - Adds new node at the end of dlistint_t
 * @head: Double pointer head node
 * @n: Integer value to store in the new node
 *
 * Return: Address of the new element, NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNodend = NULL;
	dlistint_t *current = NULL;

	newNodend = malloc(sizeof(dlistint_t));

	if (newNodend == NULL)
	{
		return (NULL);
	}

	newNodend->n = n;
	newNodend->next = NULL;

	if (*head == NULL)
	{
		newNodend->prev = newNodend;
		*head = newNodend;
		return (newNodend);
	}

	else
	{
		current = *head;

		while (current->next != NULL)
		{
			current = current->next;
		}

		current->next = newNodend;
		newNodend->prev = current;
	}

	return (newNodend);
}

