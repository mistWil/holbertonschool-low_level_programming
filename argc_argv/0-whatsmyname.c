#include <stdio.h>
#include <string.h>

/**
 * main - les arguments du main
 * @argc: nb arguments
 * @argv: arguments eux meme
 *
 * Return: void
 */

int main(int argc, char *argv[])
{
	if (argc >= 1)
	{
		printf("%s\n", argv[0]);
		return (0);
	}
	else
	{
		fprintf(stderr, "Error: No program name provided\n");
		return (1);
	}
}
