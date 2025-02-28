#include "main.h"
#include <string.h>

/**
 * puts2 - Prints every other character
 * @str: The pointer of the string
 */

void puts2(char *str)
{
	int i = 0;
	int length = 0;

	while (str[length] != '\0')
	{
		length++;
	}

	for (i = 0; i < length; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
