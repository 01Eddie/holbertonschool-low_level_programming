#include "holberton.h"

/**
 * print_triangle - short description, single line
 * @size: description of parameter a
(* a blank line
 * description: longer description of the function)?
(* section header: section description)*
 * return: void
*/

void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size; j++)
			{
				if (j <= (size - i))
				{
					_putchar(' ');
				}
				else
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
