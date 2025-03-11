#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array and intializes it to zero
 * @nmemb: Number of elements in the array
 * @size: Size (in bytes) of each element
 *
 * Return: Pointer to the allocated memory, or NULL on failure
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *byte_ptr;
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	byte_ptr = (char *)ptr;

	for (i = 0; i < nmemb * size; i++)
		byte_ptr[i] = 0;

	return (ptr);
}
