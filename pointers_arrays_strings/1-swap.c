#include "main.h"

/**
 * swap_int - swaps the values
 * @a: int
 * @b: int
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int x;

	x = *b;
	*b = *a;
	*a = x;
}
