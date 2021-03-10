#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_dog - writes the character c to stdout
 * @d: struct
 * Return: void
 */


void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		/*If an element of d is NULL, print (nil) instead of this element. (if name*/
		/*is NULL, print Name: (nil))*/
		if (d->name == NULL)
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", d->name);

		if (d->age > 0)
			printf("Age: %f\n", d->age);

		if (d->owner == NULL)
			printf("Owner: (nil)\n");
		else
			printf("Owner: %s\n", d->owner);
	}
}
