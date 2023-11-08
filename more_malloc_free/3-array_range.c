#include "main.h"

/**
 * array_range -  creates an array of integers
 * @min: int
 * @max: int
 *
 * Return: int*
 */

int *array_range(int min, int max)
{
	int *ptr = NULL;
	int i = 0;
	int size = 0;

	if (min > max)
		return (NULL);

	for (i = min; i <= max; i++)
	{
		size++;
	}

	ptr = malloc(sizeof(int) * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		ptr[i] = min + i;
	}

	return (ptr);
}
