#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * _strlen - Returns the length of a string
 * @s: Input strin pointer
 *
 * Return: Success (0)
 */

int _strlen(const char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}

/**
 * add_node_end - Function that adds a new node at the end of list_t
 * @head: Head node double pointer
 * @str: String in list_t
 *
 * Return: Address of the new element, NULL if failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode = NULL;
	list_t *current = NULL;

	newNode = malloc(sizeof(list_t));

	if (!newNode)
		return (NULL);

	newNode->str = strdup(str);
	newNode->next = NULL;

	newNode->len = _strlen(str);

	if (!newNode->str)
	{
		free(newNode);
		return (NULL);
	}

	if (*head == NULL)
		*head = newNode;

	else
	{
		current = *head;

		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = newNode;
	}

	return (newNode);
}
