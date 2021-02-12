#include "holberton.h"

/**
 * print_line - short description, single line
 * @n: description of parameter a
(* a blank line
 * description: longer description of the function)?
(* section header: section description)*
 * return: void
*/

void print_line(int n)
{
	char line = '_';
	int i;

	i = 0;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (i < n)
		{
			_putchar(line);
			i++;
		}
		_putchar('\n');
	}
}
