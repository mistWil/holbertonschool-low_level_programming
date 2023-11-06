#include "main.h"

/**
 * create_array -  creates an array of chars
 * @size: int
 * @c: char
 *
 * Return: char*
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *array = malloc(size * sizeof(char));

	if (array == NULL)
		exit(1);

	if (size == 0)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}

	return (array);
}

