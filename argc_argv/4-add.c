#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * is_positive_number - Checks if a string is a positive number
 * @s: The string to check
 *
 * Return: 1 if all chars are digits, 0 otherwise
 */
int is_positive_number(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (!isdigit(s[i]))
			return (0);
		i++;
	}
	return (1);
}

/**
 * main -  Adds positive numbers from command-line arguments
 * @argc: Number of arguments
 * @argv: Array of argument strings
 *
 * Return: 0 on succes, 1 o error
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (!is_positive_number(argv[i]))
		{
			printf("Error\n");

			return (1);

		}

		sum += atoi(argv[i]);

	}


	printf("%d\n", sum);
	return (0);
}
