#include <stdio.h>

/**
 * print_diagsums - Prints the sums of the two diagonals of a square matrix
 * @a: Pointer to the first element of the square matrix
 * @size: The size of the square matrix (number of rows/columns)
 */

void print_diagsums(int *a, int size)
{
	int primary_sum = 0;
	int secondary_sum = 0;
	int i;

	for (i = 0; i < size; i++)
	{
		primary_sum += *(a + (i * size + i));
		secondary_sum += *(a + (i * size + (size - 1 - i)));
	}

	printf("Primary diagonal sum: %d\n", primary_sum);
	printf("Secondary diagonal sum: %d\n", secondary_sum);
}
