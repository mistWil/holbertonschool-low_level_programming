#include "main.h"

/**
 * print_sign - positive or negative
 * @n: char to check
 *
 * Return: 1 if positive 0 if not
 */

int print_sign(int n)
{
	if (n >= '0')
	{
		_putchar('+');
		return (1);
	}
	else
	{
		_putchar('-');
		return (0);
	}
}
