#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int check_sign(int num);
{
	if (num > 0)
	{
		return (1);
	}
	else if (num < 0)
	{
		return (-1);

		else
		{
			return (0);
		}
	}

	int main(void);
	{
		srand(time(0));
		int n = rand() % 201 - 100;
		int result = check_sign(n);

		printf("Generated number: %d\n", n);

		if (result == 1)
		{
			printf("Positive\n");
		}
		else if (result == -1)
		{
			printf("Negative\n");
		}
		else
		{
			printf("Zero\n");
		}
		return (0);
	}
