#include "main.h"

/**
 * string_toupper - convert lowercase to uppercase
 * @a: char
 *
 * Return: char
 */

char *string_toupper(char *a)
{
	int start = 0;
	char *string = a;

	while (a[start] != '\0')
	{
		if (a[start] >= 'a' && a[start] <= 'z')
		{
			a[start] = a[start] - 32;			
		}

		start++;
	}

	return (string);
}
