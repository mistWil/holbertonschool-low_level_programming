#include "main.h"

/**
 * _strstr - locate a substring
 * @haystack: char*
 * @needle: char*
 *
 * Return: char
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *c = needle;

		if (*haystack == *c)
		{
			return (c);
		}
		c++;
		haystack++;
	}

	return ('\0');
}
