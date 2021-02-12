#include "holberton.h"

/**
 * print_number - short description, single line
 * @n: description of parameter a
(* a blank line
 * description: longer description of the function)?
(* section header: section description)*
 * return: void
*/

void print_number(int n)
{
	unsigned int i = n;

	if (n < 0)
	{
		_putchar('-');
		i = -i;
	}
	if ((i / 10) > 0)
	{
		print_number(i / 10);
	}
	_putchar('0' + i % 10);
}
