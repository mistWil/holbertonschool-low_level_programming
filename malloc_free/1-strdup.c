#include "main.h"

/**
 * _strdup - returns a pointer to a newly
 * allocated space in memory
 * @str: char*
 *
 * Return: char*
 */

char *_strdup(char *str)
{
	int len = 0;
	int i = 0;
	char *new_str;

	while (str[len] != '\0')
	{
		len++;
	}

	if (len == 0 || str == NULL)
	{
		return (NULL);
	}

	new_str = malloc(len * sizeof(char));

	for (i = 0; i < len; i++)
	{
		new_str[i] = str[i];
	}

	return (new_str);
}
