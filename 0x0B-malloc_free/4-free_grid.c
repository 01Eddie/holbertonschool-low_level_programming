#include "holberton.h"
#include <stdlib.h>

/**
 * free_grid- writes the character c to stdout
 * @grid: Integer
 * @height: Integer
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	for (; i < height; i++)
			free(grid[i]);

	free(grid);
}
