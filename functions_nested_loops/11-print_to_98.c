#include "main.h"

/**
 * print_to_98 - print numbers to 98
 * @n: integerchoosing by user
 *
 * Return: void
 */

void print_to_98(int n)
{
	while (n != 98)
	{
		printf("%i, ", n);
		if (n > 98)
			n--;
		else
			n++;
	}
	printf("98\n");
}
