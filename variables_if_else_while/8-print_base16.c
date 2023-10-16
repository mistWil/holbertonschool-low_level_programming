#include <stdlib.h>
#include <stdio.h>

/**
 * main - digit 16 with putchar
 * @void: void
 *
 * Return: Always 0 (Sucess)
 */

int main(void)
{
	int i;

	for (i = 0; i < 16; i++)
	{
		if (i < 10)
		{
			putchar(i + '0');
		}
		else
		{
			putchar (i + 87);
		}
	}

	putchar('\n');

	return (0);
}
