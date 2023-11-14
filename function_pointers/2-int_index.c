#include "function_pointers.h"
#include <stddef.h>

/**
 * int_index - searrch integer
 * @array: arr
 * @size: size of array
 * @cmp: pointer
 *
 * Return: index
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array != NULL && cmp != NULL && size > 0)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
