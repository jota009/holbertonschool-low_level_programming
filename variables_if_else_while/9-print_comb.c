#include <stdio.h>

/**
 * main - Printing all possible combinations of single digit numbers
 * Return: (0) When single digit numbers with space
 */

int main(void)

{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar(i + '0');

		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
