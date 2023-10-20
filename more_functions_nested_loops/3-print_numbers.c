#include "main.h"

/**
 * print_numbers - from 0 to 9 followed by a new line
 * @void: void
 *
 * Return: void
 */

void print_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
