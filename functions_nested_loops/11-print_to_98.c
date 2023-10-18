#include "main.h"

/**
 * print_to_98 - print numbers to 98
 * @n: integerchoosing by user
 *
 * Return: void
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
		{
			_putchar(n);
			_putchar(',');
			_putchar(' ');
			n++;
		}
		_putchar('\n');
	}
	else if (n == 98)
	{
		_putchar(n);
		_putchar('\n');
	} 
	else
	{
		while(n > 98)
		{
			_putchar(n);
			_putchar(',');
                        _putchar(' ');
			n--;
		}
		_putchar('\n');
	}
}
