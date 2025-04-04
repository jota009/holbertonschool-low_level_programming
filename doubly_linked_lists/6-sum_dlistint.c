#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all the data(n) of dlistint_t list
 * @head: Pointer to the head of the list
 *
 * Return: Sum of all the data
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0; /*Initialize sum to 0*/

	/*Check if list empty*/

	if (!head)
		return (0);

	/*Traverse the list and sum data*/

	while (head != NULL)
	{
		sum += head->n; /* Add current's node data to sum*/
		head = head->next; /* Move to next node*/
	}
	return (sum);
}
