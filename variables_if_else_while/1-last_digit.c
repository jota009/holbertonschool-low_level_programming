#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - changing the last digit of the variable
 * Return: Always 0, last digit using source code
 */

int main(void)
{
	int n;
	int last = 0;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	printf("Last digit of %d is %d", n, last);

	if (last > 5)
		printf("%d and is greater than 5\n", n);
	else if (last == 0)
		printf("%d and is 0\n", n);
	else
		printf("%d and is less than 6 and not 0\n", n);
	return (0);
}
