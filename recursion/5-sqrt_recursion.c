#include "main.h"

/* Function prototype for sqrt_helper*/
int sqrt_helper(int n, int guess);

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: The number to find the sqaure root of
 *
 * Return: The natural square root of n,
 * or -1 if n does not have a natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqrt_helper(n, 1));
}

/**
 * sqrt_helper - A helper function to find the square root recursively
 * @n: The number to find the square root of
 * @guess: The current guess for the square root
 *
 * Return: The natural sqaure root of n,
 * or -1 if n does not have a natural sqaure root
 */

int sqrt_helper(int n, int guess)
{
	if (guess * guess > n)
		return (-1);
	if (guess * guess == n)
		return (guess);
	return (sqrt_helper(n, guess + 1));
}
