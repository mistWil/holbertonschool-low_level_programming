#include "main.h"

/**
 * _calloc -  allocates memory for an array
 * @nmemb: unsigned int
 * @size: int
 *
 * Return: void
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i = 0;
	void *array = NULL;
	void *ptr;

	if (nmemb == 0)
		return (NULL);
	if (size == 0)
		return (NULL);

	array = malloc(sizeof(unsigned int) * nmemb);

	if (array == NULL)
		return (NULL);

	ptr = array;

	for (i = 0; i < nmemb; i++)
	{
		ptr[i] = 0;
	}

	return (array);
}
