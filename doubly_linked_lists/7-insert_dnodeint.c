#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position
 * @h: Pointer to the head of the list
 * @idx: Index where the new node should be added
 * @n: Integer value to store in the new node
 *
 * Return: Address of the new node, or NULL if it fails
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current = *h;
	unsigned int count = 0;
	dlistint_t *last = *h;

	dlistint_t *newNode = malloc(sizeof(dlistint_t)); /*Allocate memory for the new node*/

	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->n = n; /*Set the value of the new node*/
	newNode->prev = NULL; /*Initialize prev to NULL*/
	newNode->next = NULL; /*Initialize next to NULL*/

	/*If inserting at the head (index 0)*/
	if (idx == 0)
	{
		newNode->next = *h; /*Link the new node to the current head*/
		if (*h != NULL) /*If the list is not empty*/
		{
			(*h)->prev = newNode; /*Set the previous head's prev to the new node*/
		}
		*h = newNode; /*Update head to the new node*/
		return (newNode); /*Return the new node*/
	}

	/*Traverse to the position where the new node should be inserted*/

	while (current != NULL && count < idx)
	{
		current = current->next;
		count++;
	}

	/*If the current is NULL, means idx is greater than the length of the list*/
	if (current == NULL && count == idx)
	{
		/*Inserting at the end of the list*/
		while (last->next != NULL) /* Traverse to the last node*/
		{
			last = last->next;
		}
		last->next = newNode; /*Link the last node to the new node*/
		newNode->prev = last; /*Set the new node's prev to last node*/
		return (newNode);
	}

	if (current != NULL)
	{
		newNode->next = current; /*Link the new node to the current node*/
		newNode->prev = current->prev; /*Link the new node's prev to the previous node*/

		if (current->prev != NULL) /*If there is a previous node*/
		{
			current->prev->next = newNode; /*Link the previous node to the new node*/
		}
		current->prev = newNode; /*Link the current node's prev to the new node*/
	}

	return (newNode);
}
