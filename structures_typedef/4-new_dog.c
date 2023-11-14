#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

char *_memcpy(char *dest, char *src, unsigned int n);

/**
 * _memcpy - function that copies memory area
 * @dest: destination char string
 * @src: source char string
 * @n: unsigned integer
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

/**
 * new_dog - function that creates a new dog
 * @name: first member
 * @age: second member
 * @owner: third member
 *
 * Return: return null if the function fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int len1 = 0, len2 = 0;
	dog_t *new_dog = NULL;

	while (name[len1] != '\0')
		len1++;
	while (owner[len2] != '\0')
		len2++;

	new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
		return (NULL);

	new_dog->name = malloc((len1 + 1) * sizeof(char));

	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	_memcpy(new_dog->name, name, len1);
	new_dog->name[len1] = '\0';

	new_dog->age = age;
	new_dog->owner = malloc((len2 + 1) * sizeof(char));

	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	_memcpy(new_dog->owner, owner, len2);
	new_dog->owner[len2] = '\0';

	return (new_dog);
}
