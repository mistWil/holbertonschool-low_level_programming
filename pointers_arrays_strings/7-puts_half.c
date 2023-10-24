#include "main.h"

/**
 * puts_half - half of string
 * @str: char
 *
 * Return: void
 */

void puts_half(char *str)
{
	int len = 0;
	int moitie = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	for (moitie = len / 2; moitie <= len - 1 ; moitie++)
	{
	_putchar(str[moitie]);
	}
	_putchar('\n');
}
