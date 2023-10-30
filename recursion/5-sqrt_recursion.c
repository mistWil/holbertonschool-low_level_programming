#include "main.h"

/**
 * calculate_sqrt - calculate sqrt of a number
 * @n : int
 * @sqr: int
 *
 * Return: int
 */

int calculate_sqrt(int n, int sqr)
{
	if (sqr * sqr == n)
	{
		return (sqr);
	}

	else if (sqr * sqr > n)
	{
		return (-1);
	}
	else
	{
		return (calculate_sqrt(n, sqr + 1));
	}
}


/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n : int
 *
 * Return: int
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (calculate_sqrt(n, 0));
}
