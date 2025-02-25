#include "main.h"

/**
 * print_square - Print square of '#' characters
 * @size: The size (side length) of the square
 *
 * Description: If size is 0 or less, prints only a newline
 */

void print_square(int size)
{
	int row, col;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (row = 0; row < size; row++)
	{
		for (col = 0; col < size; col++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
