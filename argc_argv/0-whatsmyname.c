#include <stdio.h>

/**
 * main - Prints the program's name followed by a neew line
 * @argc: Nmbre of command-line arguments
 * @argv: Array of command-line arguments
 *
 * Return: 0 (succes)
 */

int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
