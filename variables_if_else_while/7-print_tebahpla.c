#include <stdio.h>

/**
 * main - printing alphabet backwards using putchar
 * Return: 0 (alphabet backwards)
 */

int main(void)

{
	char c;

	for (c = 'z'; c >= 'a'; c--)
		putchar(c);

	putchar('\n');
	return (0);
}
