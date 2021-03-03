#include "holberton.h"
#include <stdlib.h>
int _strlen(char *s);

/**
 * alloc_grid- writes the character c to stdout
 * @width: Integer
 * @height: Integer
 * Return: arr
 */

int **alloc_grid(int width, int height)
{
	int **arr;
	int i;

	arr = malloc(height * sizeof(int *));

	for (i = 0; i < height; i++)
		arr[i] = malloc(width * sizeof(int));

	return (arr);
}
