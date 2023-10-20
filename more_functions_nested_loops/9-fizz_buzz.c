#include <stdio.h>
#include <stdlib.h>

/**
 * main - write fizz if % 3 and buzz if % 5
 * @void: void
 *
 * Return: 0 if success
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 != 0))
		{
			printf("Fizz");
			if (i != 100)
			printf(" ");
		}
		else if ((i % 5 == 0) && (i % 3 != 0))
		{
			printf("Buzz");
			if (i != 100)
			printf(" ");
		}
		else if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz");
			if (i != 100)
			printf(" ");
		}
		else
		{
			printf("%d", i);
			if (i != 100)
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
