#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - function that executes a function
 * given as a parameter on each element of an array
 * @array: int array
 * @size: size of array
 * @action: pointer of function to apply
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
