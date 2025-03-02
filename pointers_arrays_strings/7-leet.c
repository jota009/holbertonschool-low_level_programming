#include "main.h"

/**
 * leet - Encodes a string into 1337 (leet) format
 * @str: The string to encode
 *
 * Return: Pointer to the encoded string
 */
char *leet(char *str)
{
	int i, j;
	char original[] = "aAeEoOtTlL";
	char leet[] = "4433007711";

	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (original[j] != '\0')
		{
			if (str[i] == original[j])
			{
				str[i] = leet[j];
				break;
			}
			j++;
		}
		i++;
	}

	return (str);
}
