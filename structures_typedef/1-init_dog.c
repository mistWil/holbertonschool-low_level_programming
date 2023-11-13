#include "dog.h"

/**
 * init_dog - initialize a variable
 * @d: struct dog*
 * @name: char*
 * @age: float
 * @owner: char*
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
