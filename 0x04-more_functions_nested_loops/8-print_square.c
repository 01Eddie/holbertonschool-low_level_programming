#include "holberton.h"

/**
 * print_square - short description, single line
 * @size: description of parameter a
(* a blank line
 * description: longer description of the function)?
(* section header: section description)*
 * return: void
*/

void print_square(int size)
{
	int fila, columna;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (fila = 0; fila < size; fila++)
		{
			for (columna = 0; columna < size; columna++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
