#include "function_pointers.h"
#include <stddef.h>

/**
 * int_index - Function that searches for an integer
 * @array: Array to iterate
 * @size: Number of elements in the array
 * @cmp: Function pointer
 *
 * Return: First element of function pointer that is not 0
 * if no element matches -1, of size is less or 0 -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (cmp == NULL || array == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}
