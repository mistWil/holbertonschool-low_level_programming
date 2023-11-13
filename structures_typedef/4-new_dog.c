#include <stdlib.h>
#include "dog.h"
#include <stdio.h>

/**
 * _strdup - returns a pointer to a newly
 * allocated space in memory
 * @str: char*
 *
 * Return: char*
 */

char *_strdup(char *str);

char *_strdup(char *str)
{
	int len = 0;
	int i = 0;
	char *new_str;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[len] != '\0')
	{
		len++;
	}

	new_str = malloc(len * sizeof(char) + sizeof(char));

	if (new_str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len; i++)
	{
		new_str[i] = str[i];
	}

	return (new_str);
	free(new_str);
}

/**
 * new_dog - creates new dog
 * @name: char*
 * @age: float
 * @owner: char*
 *
 * Return: new_dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog = (dog_t *)malloc(sizeof(dog_t));

	if (new_dog != NULL)
	{
		new_dog->name = _strdup(name);
		if (new_dog->name == NULL)
		{
			fprintf(stderr, "Allocation error\n");
			free(new_dog);
			return (NULL);
		}

		new_dog->age = age;

		new_dog->owner = _strdup(owner);

		if (new_dog->owner == NULL)
		{
			fprintf(stderr, "Allocation error\n");
			free(new_dog->name);
			free(new_dog);
			return (NULL);
		}
	}
	return (new_dog);
}
