#include "main.h"

/**
 * calc_prime - calculate prime numbers
 * @n: int
 * @prime: int
 *
 * Return: int
 */

int calc_prime(int n, int prime)
{
	if (n % prime == 0 && prime < n)
	{
		return (0);
	}
	else if (n == prime)
	{
		return (1);
	}

	return (calc_prime(n, prime + 1));
}


/**
 * is_prime_number - find prime numbers
 * @n: int
 *
 * Return: int
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (calc_prime(n, 2));
}
