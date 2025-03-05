#include "main.h"
#include <stddef.h>

/**
 * _strstr - Locates a substring
 * @haystack: String to search
 * @needle: Substring to locate
 *
 * Return: Pointer to the located substring, NULL if not found
 */

char *_strstr(char *haystack, char *needle)
{
	char *h;
	char *n;

	if (*needle == '\0')
	{
		return (haystack);
	}

	while (*haystack != '\0')
	{
		h = haystack;
		n = needle;

		while (*h != '\0' && *n != '\0' && *h == *n)
		{
			h++;
			n++;
		}

		if (*n == '\0')
		{
			return (haystack);
		}

		haystack++;
	}

	return (NULL);
}
