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
			printf(" ");
		}
		else if ((i % 5 == 0) && (i % 3 != 0))
		{
			printf("Buzz");
			printf(" ");
		}
		else if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz");
			printf(" ");
		}
		else
		{
			printf("%d", i);
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
