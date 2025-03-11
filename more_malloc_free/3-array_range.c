#include "main.h"
#include <stdlib.h>

/**
 * array_range - Creates an array of integers from min to max (inclusive)
 * @min: Starting value (included)
 * @max: Ending value (included)
 *
 * Return: Pointer to the allocated array, or NULL on failure
 */

int *array_range(int min, int max)
{
	int *arr;
	int num_elements, i;

	if (min > max)
		return (NULL);

	num_elements = max - min + 1;

	arr = malloc(num_elements * sizeof(int));

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < num_elements; i++)
		arr[i] = min + i;

	return (arr);
}
