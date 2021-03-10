#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - writes the character c to stdout
 * @d: struct
 * @name: Character
 * @age: Float
 * @owner: Character
 * Return: void x or NULL
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
