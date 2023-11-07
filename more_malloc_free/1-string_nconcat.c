#include "main.h"

/**
 * string_nconcat -  concatenates two strings
 * @s1: char*
 * @s2: char*
 * @n: unsigned int
 *
 * Return: char
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0, len_s1 = 0, len_s2 = 0;
	unsigned int total_len = len_s1 + len_s2;
	char *concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len_s1] != '\0')
	{
		len_s1++;
	}

	while (s2[len_s2] != '\0')
	{
		len_s2++;
	}

	concat = malloc(total_len * sizeof(char) + sizeof(char));

	if (concat == NULL)
		return (NULL);

	for (i = 0; i < len_s1; i++)
	{
		concat[i] = s1[i];
	}

	if (n >= len_s2)
                n = len_s2;

	for (j = 0; j < n; j++)
	{
		concat[i + j] = s2[j];
	}

	concat[i + j] = '\0';
	return (concat);
}








