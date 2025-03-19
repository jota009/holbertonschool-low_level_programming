#include "variadic_functions.h"


/**
 * sum_them_all - Returns the sum of all its parameters
 * @n: Input integer
 *
 *
 * Return: Sum of all n parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0;
	int total = 0;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		total += va_arg(ap, int);
	}

	va_end(ap);
	return (total);

	if (n == 0)
	{
		return (0);
	}
}
