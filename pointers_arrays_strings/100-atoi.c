#include "main.h"
#include <limits.h>

/**
 * _atoi - Converts a string to an integer
 * @s: The string to convert
 *
 * Return: Converted integer
 */

int _atoi(char *s)
{
	int sign = 1;
	int result = 0;
	int digit;

	while (*s != '\0' && (*s < '0' || *s > '9'))
	{
		if (*s == '-')
			sign *= -1;
		s++;
	}

	while (*s >= '0' && *s <= '9')
	{
		digit = *s - '0';


		if (result > (INT_MAX - digit) / 10)
		{
			return ((sign == 1) ? INT_MAX : INT_MIN);
		}

		result = result * 10 + digit;
		s++;
	}

	return (result * sign);
}
