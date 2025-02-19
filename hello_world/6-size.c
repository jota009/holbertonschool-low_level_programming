#include <stdio.h>
#include <stddef.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("float: %zu byte(s)\n", sizeof(float));
	printf("long long int: %zu byte(s)\n", sizeof(long long int));
	printf("long int: %zu byte(s)\n" sizeof(long int));
	printf("int: %zu byte(s)\n", sizeof(int));
	printf("char: %zu byte(s)\n", sizeof(char));
	return (0);
}

