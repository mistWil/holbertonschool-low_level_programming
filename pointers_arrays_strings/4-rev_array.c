#include "main.h"

/**
 * reverse_array - reverse content of integers array
 * @a: int
 * @n: int
 *
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int temp = 0;
	int start = 0;
	int end = n - 1;

	while (start < end)
	{
		temp = a[start];
		a[start] = a[end];
		a[end] = temp;
		start++;
		end--;
	}
}
