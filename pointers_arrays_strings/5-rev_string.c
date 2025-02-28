#include "main.h"
#include <stdio.h>

/**
 * rev_string - Functions that reveses a string
 * @s: Pointer string to be reversed
 */

void rev_string(char *s)
{
	int i = 0;
	int j;
	int start;

	while (s[i] != '\0')
	
		i++;
	}

	j = i - 1;

	for (start = 0; start < j; start++, j--)
	{
		char temp = s[start];

		s[start] = s[j];
		s[j] = temp;
	}
}
