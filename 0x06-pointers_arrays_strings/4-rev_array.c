#include "holberton.h"

/**
 * reverse_array - short description, single line
 * @a: integer
 * @n: integer
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int pointer;

	while (n - 1 > i)
	{
		pointer = a[i];
		a[i] = a[n - 1];
		a[n - 1] = pointer;
		n--;
		i++;
	}
}
