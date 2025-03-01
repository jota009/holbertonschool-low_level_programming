#include "main.h"

/**
 * _strncat -Concatenates two strings with n bytes
 * @dest: Destination string
 * @src: Source string to append
 * @n: Maximum number of bytes from src to use
 *
 * Return: Pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;


	while (*ptr != '\0')
		ptr++;

	while (n > 0 && *src != '\0')
	{
		*ptr = *src;
		ptr++;
		src++;
		n--;
	}

	*ptr = '\0';

	return (dest);
}
