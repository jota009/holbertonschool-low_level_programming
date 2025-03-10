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
	int len_s1 = 0, len_s2 = 0;
	int i, j;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[len_s1] != '\0')
		len_s1++;

	while (s2[len_s2] != '\0')
		len_s2++;

	new_str = malloc(len_s1 + len_s2 + 1);
	if (new_str == NULL)
		return (NULL);

	for (i = 0; i < len_s1; i++)
		new_str[i] = s1[i];

	for (j = 0; j <= len_s2; j++)
		new_str[i + j] = s2[j];

	return (new_str);
}

