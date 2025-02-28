#include "main.h"

/**
 * puts_half - Prints half of a string
 * @str: The pointer of the string
 */

void puts_half(char *str)
{
	int i;
	int length = 0;
	int start;

	while (str[length] != '\0')
	{
		length++;
	}

	if (length % 2 == 0)
	{
		start = (length / 2);
	}
	else
	{
		start = (length / 2) + 1;
	}

	for (i = start; i < length; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
