#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @dest: The destination string
 * @src: source string to be appended
 *
 * Return: Pointer to the resulting string dest.
 */

char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	while (*ptr != '\0')
	{
		ptr++;
	}

	while (*src != '\0')
	{
		*ptr = *src;
		ptr++;
		src++;
	}

	*ptr = '\0';

	return (dest);
}

