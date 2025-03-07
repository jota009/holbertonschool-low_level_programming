#include "main.h"

/**
 * factorial - Returns the factorial of a given number
 * @n: factorial number to check
 *
 * Return: Factorial of n. If n < 0, return -1 (error).
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
