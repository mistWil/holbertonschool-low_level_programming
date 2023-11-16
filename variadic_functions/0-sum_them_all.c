#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: unsigned int
 *
 * Return: int
 */

int sum_them_all(const unsigned int n, ...)
{
	int somme = 0;
	unsigned int i = 0;

	va_list arguments;

	va_start(arguments, n);

	for (i = 0; i < n; i++)
	{
		somme += va_arg(arguments, int);
	}

	va_end(arguments);

	return (somme);
}
