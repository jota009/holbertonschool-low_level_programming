#include "main.h"
#include <stdlib.h>

/**
 * _strlen - Custom function to calculate the lenght of a string
 * @s: The inout string
 *
 * Return: Lenght of the string
 */

unsigned int _strlen(char *s)
{
	unsigned int len = 0;

	while (s && s[len] != '\0')
		len++;

	return (len);
}

/**
 * string_nconcat - concatenates two strings, unsing up to n bytes from s2
 * @s1: First string (treated as "" if NULL)
 * @s2: Second string (treated as "" if NULL)
 * @n: Maximum number of bytes from s2 to use
 *
 * Return: Pointer to the new concatenated string, or NULL on failure
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{

	unsigned int len_s1, len_s2, len_s2_used, i, j;
	char *new_str;

	s1 = (s1 == NULL) ? "" : s1;
	s2 = (s2 == NULL) ? "" : s2;

	len_s1 = _strlen(s1);
	len_s2 = _strlen(s2);

	len_s2_used = (n >= len_s2) ? len_s2 : n;

	new_str = malloc(len_s1 + len_s2_used + 1);

	if (new_str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len_s1; i++)
	{
		new_str[i] = s1[i];
	}

	for (j = 0; j < len_s2_used; j++)
	{
		new_str[i + j] = s2[j];
	}

	new_str[i + j] = '\0';

	return (new_str);
}
