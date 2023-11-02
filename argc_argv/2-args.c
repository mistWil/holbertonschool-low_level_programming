#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * main - int
 * @argc: int
 * argv: *char
 *
 * Return: o if success
 */

int main(int argc, char *argv[])
{
	int i = 0;

	if (argc >= 1)
	{
		for (i = 0; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
	}
	return (0);
}
