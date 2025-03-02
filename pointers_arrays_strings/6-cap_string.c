#include "main.h"

/**
 * cap_string - Capitalizes the first letter of each word in a string
 * @str: The string to modify
 *
 * Return: Pointer to the modified string
 */

char *cap_string(char *str)
{
	int i = 0;
	int capitalize_next = 1;
	char separators[] = " \t\n,;.!?\"(){}";
	int sep_size = 13;
	int j;
	int is_separator;

	while (str[i] != '\0')
	{
		is_separator = 0;
		for (j = 0; j < sep_size; j++)
		{
			if (str[i] == separators[j])
			{
				is_separator = 1;
				break;
			}
		}

		if (capitalize_next && (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] = str[i] - 32;
			capitalize_next = 0;
		}
		if (is_separator)
		{
			capitalize_next = 1;
		}
		else
		{
			capitalize_next = 0;
		}
		i++;
	}
	return (str);
}
