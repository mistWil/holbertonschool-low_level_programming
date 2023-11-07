#include "main.h"

/**
 * malloc_checked - function that allocates memory
 * @b: unsigned int
 *
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}
