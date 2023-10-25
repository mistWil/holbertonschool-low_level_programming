#include "main.h"

/**
 * _atoi - convert string to integer
 * @s: char
 *
 * Return: int
 */

int _atoi(char *s)
{
	int num = 0;
	int sign = 1;

	while (*s)
	{
		if (*s == '-')
		{
			sign = -1;
		}
		else if (*s >= '0' && *s <= '9')
		{
			num = num * 10 + (*s - '0');
		}
		else if (num != 0)
		{
			break;
		}
		s++;
	}
	return (num * sign);
}
