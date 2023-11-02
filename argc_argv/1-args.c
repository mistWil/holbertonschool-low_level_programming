#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - arg of main
 * @argc: nb args
 * @argv: *args
 *
 * Return: void
 */

int main(int argc, char *argv[] __attribute__((unused)))
{

	if (argc >= 1)
	{
		printf("%d\n", argc - 1);
		return (0);
	}
	else
	{
		fprintf(stderr, "Error: No program provided\n");
		return (1);
	}
}
