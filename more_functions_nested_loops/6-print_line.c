#include "main.h"

/**
 * print_line - print line if n > 0
 * @n: integer
 *
 * Return: void
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			_putchar('-');
		}
		_putchar('\n');
	}
}
