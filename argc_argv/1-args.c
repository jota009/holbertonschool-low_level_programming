#include <stdio.h>

/**
 * main - Prints the number if arguments passed into it
 * @argc: Number of command-line arguments
 * @argv: Array of the commad-line arguments
 *
 * Return: 0 (Succes)
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
