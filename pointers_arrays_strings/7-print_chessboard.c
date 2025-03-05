#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - Prints chessboard
 * @a: A pointer to an array of 8 characters representing the chessboard
 */

void print_chessboard(char (*a)[8])
{
	int rows, cols;

	for (rows = 0; rows < 8; rows++)
	{
		for (cols = 0; cols < 8; cols++)
		{
			printf("%c", a[rows][cols]);
		}
		printf("\n");
	}
}
