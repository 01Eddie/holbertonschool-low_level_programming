#include "holberton.h"
#include <stdlib.h>

/**
 * create_array - writes the character c to stdout
 * @size: unsigned int
 * @c: Character
 * Return: NULL or ar
 */

char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i;

	if (size == 0)
		return (NULL);

	ar = malloc(size * sizeof(char));

	for (i = 0; i <= size; i++)
		ar[i] = c;

	return (ar);

}
