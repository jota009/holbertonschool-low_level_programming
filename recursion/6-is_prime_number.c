#include "main.h"

/* Function prototype for check_prime */
int check_prime(int n, int i);

/**
 * is_prime_number - Checks if a number is prime
 * @n: input integer
 *
 * Return: Return 1 if n is a primer number, Otherwise return 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	if (n == 2)
		return (1);
	return (check_prime(n, 2));
}

/**
 * check_prime - Helper fuction to check for factors
 * @n: The number to check
 * @i: The current divisor to check
 *
 * Return: 1 if n is prime, 0 otherwise
 */

int check_prime(int n, int i)
{
	if (i * i > n)
		return (1);
	if (n % i == 0)
		return (0);
	return (check_prime(n, i + 1));
}
