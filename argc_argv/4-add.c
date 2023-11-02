#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 * @argc: first argument
 * @argv: second argument
 *
 * Return: (0)
 */

int main(int argc, char *argv[])
{
	int i;
	int j;
	int digit;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		digit = atoi(argv[i]);
		if (digit > 0)
		{
			sum = sum + digit;
		}
	}
		printf("%d\n", sum);

	return (0);
}
