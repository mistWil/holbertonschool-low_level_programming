#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: pointer to the number to modify
 * @index: index of the bit to clear
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1;

	if (index >= 8 * sizeof(unsigned long int))
		return (-1);

	mask <<= index;

	while (mask != 0)
	{
		*n = *n & ~mask;
		mask <<= 1;
	}

	return (1);
}

