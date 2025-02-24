#include <main.h>

/**
 * main - Printing var
 *
 * Return: Always 0
 */

int main(void)
{
	char *p = "_putchar";

	while (*p)
	{
		_putchar(*p);
		p++;
	}

	_putchar('\n');
	return (0);
}
