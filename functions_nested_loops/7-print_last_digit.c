#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @r: integer to be checked
 *
 * Return: Always 0
 */

int print_last_digit(int r)
{
	int n = r % 10;

	if (n < 0)
	{
		n = -n;
	}
	_putchar('0' + n);

	return (0);
}
