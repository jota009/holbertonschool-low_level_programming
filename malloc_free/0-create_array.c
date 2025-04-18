#include "main.h"
#include <stdlib.h>

/**
 * *create_array - Creates array of chars, and initializes with specific char
 * @size: The size of the array (number of elements)
 * @c: The character to initialize the array with
 *
 * Return: A pointer to the allocated array,
 * or NULL if size is 0 or allocation fails
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	arr = (char *)malloc(size * sizeof(char));
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = c;

	return (arr);
}
