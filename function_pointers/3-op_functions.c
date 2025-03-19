#include "3-calc.h"

/**
 * op_add - Returns the sum of a and b
 * @a: First integer
 * @b: Second integer
 *
 * Return: Result of the addition
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Returns the difference of a and b
 * @a: First integer
 * @b: Second integer
 *
 * Return: Result of the subtraction
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Returns the product of a and b
 * @a: First integer
 * @b: Second integer
 *
 * Return: Result of the multiplication
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Returns the result of division a and b
 * @a: First integer
 * @b: Second integer
 *
 * Return: Result of the division
 * Exits with status 100 if b is 0
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - Returns the remainder of division a and b
 * @a: First integer
 * @b: Second integer
 *
 * Return: Result of the modulus opreation
 * Exits with status 100 if b is 0
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
