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
	for (n = n; n < 99; n++)
	{
		if (n == 98)
			printf("%d", n);
		else
			printf("%d, ", n);
	}
	printf("\n");
}
