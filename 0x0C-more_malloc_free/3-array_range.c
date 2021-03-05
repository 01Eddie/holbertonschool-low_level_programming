#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - writes the character c to stdout
 * @min: Integer
 * @max: Integer
 * Return: NULL or x
 */

int *array_range(int min, int max)
{
	int *x;
	int count, sumP;

	/*If min > max, return NULL*/
	if (min > max)
		return (NULL);

	sumP = max - min + 1;
	x = malloc(sizeof(int) * sumP);
	/*If malloc fails, return NULL*/
	if (x == NULL)
		return (NULL);

	/*The array created should contain all the values from min(included) to*/
	/*max (included), ordered from min to max*/
	for (count = 0; count < sumP; count++, min++)
		x[count] = min;

	/*Return: the pointer to the newly created array*/
	return (x);
}
