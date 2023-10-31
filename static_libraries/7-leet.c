#include "main.h"

/**
 * leet - encodes a string
 * @a: char
 *
 * Return: char
 */

char *leet(char *a)
{
	char *ptr = a;
	int i = 0;

	while (*a)
	{
		char leet_chars[] = "aAeEoOtTlL";
		char leet_replacements[] = "4433007711";

		for (i = 0; leet_chars[i] != '\0'; i++)
		{
			if (*a == leet_chars[i])
			{
				*a = leet_replacements[i];
				break;
			}
		}

	a++;
	}

	return (ptr);
}
