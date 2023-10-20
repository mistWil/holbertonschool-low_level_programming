#include "main.h"

/**
 * print_triangle - print triangle if n > 0
 * @size: size of the triangle
 *
 * Return: void
 */

void print_triangle(int size)
{
	int row, space, hash;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (row = 0; row < size ; row++)
		{
			for (space = 0; space < size - row - 1; space++)
			{
				_putchar(' ');
			}
			for (hash = 0; hash < row + 1; hash++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
