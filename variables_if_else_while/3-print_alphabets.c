#include <stdio.h>

/**
 * main - Printing alphabet in lower case and uppercase
 * Return: alphabet characters.
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);

	for (c = 'A'; c <= 'Z'; c++)
		putchar(c);

	putchar('\n');
	return (0);
}
