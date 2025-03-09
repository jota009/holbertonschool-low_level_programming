#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies two numbers from command-line arguments
 * @argc: Number of command-line arguments
 * @argv: Array of the command-line arguments
 *
 * Return: 0 on succes, 1 on error
 */

int main(int argc, char *argv[])
{

	int num1, num2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	printf("%d\n", num1 * num2);
	return (0);
}
