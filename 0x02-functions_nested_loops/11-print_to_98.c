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
	int x;

	if (n <= 98)
	{
		for (x = n; x < 99; x++)
		{
			if (x == 98)
				printf("%d", x);
			else
				printf("%d, ", x);
		}
	}
	else
	{
		for (x = n; x >= 98; x--)
		{
			if (x == 98)
				printf("%d", x);
			else
				printf("%d, ", x);
		}
	}
	printf("\n");
}
