#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: int*
 * @size: int
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int diag1 = 0;
	int diag2 = 0;
	int i = 0;

	for (i = 0; i < size; i++)
	{
		diag1 += a[i * size + i];
		diag2 += a[i * size + (size - 1 - i)];
	}
	printf("%d, %d\n", diag1, diag2);
}
