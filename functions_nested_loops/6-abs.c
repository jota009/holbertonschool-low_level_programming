#include "main.h"

/**
 * _abs - computes the main value of an integer
 * @r: The integer to compute the absolut value of * Return: Always 0
 *
 * Return: Absolute value of r
 */

int _abs(int r)
{
	if (r < 0)
	{
		return (-r);
	}
	return (r);
}
