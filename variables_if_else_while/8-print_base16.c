#include <stdio.h>

/**
 * main - Printing all numbers of base 16
 * Return: (0) whith base 16 numbers
 */

int main(void)

{
	int c;

	c = 0;

	for (c = '0'; c <= '9'; c++)
		putchar(c);

	for (c = 'a'; c <= 'f'; c++)
		putchar(c);

	putchar('\n');
	return (0);
}
