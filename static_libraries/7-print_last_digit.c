#include "main.h"

/**
 * print_last_digit - printLastDigit
 * @n: int
 *
 * Return: value of last digit
 */

int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (last_digit < 0)
		last_digit *= -1;

	_putchar(last_digit + '0');

	return (last_digit);
}
