#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - returns a pointer to a nelwy allocated copy of the strinf 'str'
 *
 * @str: String to be duplicated
 *
 * Return: pointer to the duplicated string, or
 * NULL if insufficient memory was available
 */

char *_strdup(char *str)
{
	char *arr;
	unsigned int length = 0;
	unsigned int i;

	if (str == NULL)
		return (NULL);

	while (str[length] != '\0')
		length++;

	arr = (char *)malloc((length + 1) * sizeof(char));
	if (arr == NULL)
		return (NULL);

	for (i = 0; i <= length; i++)
		arr[i] = str[i];

	return (arr);
}
