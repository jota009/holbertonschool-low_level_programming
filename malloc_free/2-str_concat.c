#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * *str_concat - Concatenates two strings
 * @s1: string 1 (treated as "" if NULL)
 * @s2: string 2 (treated as "" if NULL)
 *
 * Return: A pointer to the concatenated string, or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *new_str;
	size_t len_s1, len_s2;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	len_s1 = strlen(s1);
	len_s2 = strlen(s2);

	new_str = malloc(len_s1 + len_s2 + 1);
	if (new_str == NULL)
		return (NULL);

	memcpy(new_str, s1, len_s1);
	memcpy(new_str + len_s1, s2, len_s2 + 1);

	return (new_str);
}

