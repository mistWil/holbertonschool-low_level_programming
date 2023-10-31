#include "main.h"
/**
 * puts2 - puts 2 char of string
 * @str: string
 *
 * Return: void
 */

void puts2(char *str)
{
	int fin = 0;
	int i = 0;

	while (str[fin] != '\0')
	{
		fin++;
	}

	for (i = 0; i <= fin - 1; i = i + 2)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
