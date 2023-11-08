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
	void *array = NULL;

	if (nmemb == 0)
		return (NULL);
	if (size == 0)
		return NULL;

	array = malloc(sizeof(unsigned int) * nmemb);

	if (array == NULL)
		return (NULL);

	return (array);
}
