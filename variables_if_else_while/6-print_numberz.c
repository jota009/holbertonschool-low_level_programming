#include <stdio.h>

/**
 * main - printing base 10 numbers with putchar
 * Return: Value of base 1- with putchar
 */

int main(void)
{
	int s = 0;

	while (s < 10)
	{
		putchar(s + '0');
		s++;
	}
	putchar('\n');
	return (0);
}

