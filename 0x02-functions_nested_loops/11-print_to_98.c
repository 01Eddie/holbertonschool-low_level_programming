#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - Short description, single line
 * @n: Parameter
(* a blank line
 * Description: Longer description of the function)?
(* section header: Section description)*
 * Return: no
 */

void print_to_98(int n)
{
	int count;

	for (count = n; count < 99; count++)
	{
		if (count == 98)
			printf("%d", count);
		else
			printf("%d, ", count);
	}
	printf("\n");
}
