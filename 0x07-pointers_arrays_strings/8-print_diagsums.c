#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - function print_diagsums
 * @a: integer
 * @size: integer
 * Return: void
*/


void print_diagsums(int *a, int size)
{
	int i, j;
	int sum, sum1;

	sum = 0;
	sum1 = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
				sum = sum + (*(a + i * size + j));
			if (i + j == size - 1)
				sum1 = sum1 + (*(a + i * size + j));
		}
	}
	printf("%d, %d\n", sum, sum1);
}
