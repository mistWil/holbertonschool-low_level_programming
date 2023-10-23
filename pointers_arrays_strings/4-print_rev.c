#include "main.h"

/**
 * print_rev - print reverse
 * @s: char
 *
 * Return: void
 */

void print_rev(char *s)
{
	int i;
	int j;

	while (s[i] != '\0')
	{
		i++;
	}

	for (j = i; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}

