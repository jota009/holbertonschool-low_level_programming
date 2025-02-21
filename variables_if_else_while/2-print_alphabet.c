#include <stdio.h>

/**
 * main - Printing alphabet in lower case
 * Return: alphabet character
 */

int main(void)
{
	char c;

	for (c =  'a'; c <= 'z'; c++)
		putchar(c);

	putchar('\n');
	return (0);
}
