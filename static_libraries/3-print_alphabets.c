#include <stdio.h>
#include <stdio.h>

/**
 * main - Entry point
 * @void: void
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char i;

	for (i = 97; i <= 122; i++)
	{
		putchar(i);
	}

	for (i = 65; i <= 90; i++)
	{
		putchar(i);
	}

	putchar('\n');

	return (0);
}
