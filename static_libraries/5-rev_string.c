#include "main.h"

/**
 * rev_string - rev string
 * @s: string
 *
 * Return: void
 */

void rev_string(char *s)
{
	int fin = 0;
	int debut = 0;
	char temporaire;

	while (s[fin] != '\0')
	{
		fin++;
	}

	fin--;

	for (debut = 0; debut <= fin; debut++)
	{
		temporaire = s[fin];
		s[fin] = s[debut];
		s[debut] = temporaire;
		fin--;
	}


}
