#include <stdlib.h>
#include <stdio.h>

/**
 * main - digit with putchar
 * @void: void
 *
 * Return: Always 0 (Sucess)
 */

int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
	}

	putchar('\n');

	return (0);
}
