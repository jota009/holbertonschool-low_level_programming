#include <stdio.h>

/**
 * main - Printing alphabet in lower case without q and e
 * Return: value of alphabet
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)

		if (c != 'q' && c != 'e')
			putchar(c);

	putchar('\n');
	return (0);
}

