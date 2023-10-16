#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <math.h>
/**
 *  main: Positive or negative
 *
 *  Return: 0 (for success)
 */

int main(void)
{
	/*Variable*/
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is positive\n", n);
	}

	return (0);
}
