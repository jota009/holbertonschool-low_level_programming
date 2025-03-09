#include <stdio.h>

/**
 * main - Prints akk arguments it receives
 * @argc: Number of command-line arguments
 * @argv: Array of the command-line arguments
 *
 * Return: 0 (Sucess)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

