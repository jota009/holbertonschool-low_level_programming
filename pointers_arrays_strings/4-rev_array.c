#include "main.h"
/**
 * reverse_array - Reverses the contents of an array of integers
 * @a: The array to reverse
 * @n: Number of elements of the array
 */

void reverse_array(int *a, int n)
{
	int start = 0;
	int end = n - 1;
	int temp;

	while (start < end)
	{
		temp = a[start];
		a[start] = a[end];
		a[end] = temp;

		start++;
		end--;
	}
}
