#include "main.h"
#include <stdio.h>

/**
 * _puts - print a sting followed by a new line
 * @str: output string
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		putchar(str[i]);
		i++;
	}

	putchar('\n');
}
