#include "main.h"

/**
 * rev_string - print string reverse
 * @s: char
 *
 * Return: void
 */

void rev_string(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	while (len > 0)
	{
		s--;
		len--;
		_putchar(*s);
	}
	_putchar('\n');
}

