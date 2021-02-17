#include "holberton.h"
#include <stdio.h>
/**
 * print_array - short description, single line
 * @a: integer
 * @n: integer
(* a blank line
 * description: longer description of the function)?
(* section header: section description)*
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i < n - 1)
			printf(", ");
	}

	printf("\n");
}
