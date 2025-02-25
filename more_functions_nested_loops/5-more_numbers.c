#include "main.h"

/**
 * more_numbers - Print 10 times numbers 0 to 14
 */

void more_numbers(void)
{
	int c, num;

	for (c = 0; c < 10; c++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num >= 10)
			{
				_putchar((num / 10) + '0');
			}
			_putchar((num % 10) + '0');
		}
		_putchar('\n');
	}
}
