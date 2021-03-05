#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - writes the character c to stdout
 * @nmemb: Integer
 * @size: Integer
 * Return: NULL or x
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *x;
	unsigned int count;

 /* If nmemb or size is 0, then _calloc returns NULL*/
	if (nmemb == 0 || size == 0)
		return (NULL);

	/* If malloc fails, then _calloc returns NULL */
	x = malloc(nmemb * size);

	if (x == NULL)
		return (NULL);

	/* The memory is set to zero */
	for (count = 0; count < (nmemb * size); count++)
		x[count] = 0;

	return (x);
}
