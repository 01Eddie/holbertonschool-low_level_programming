#include "holberton.h"

/**
 * print_most_numbers- short description, single line
 * @void: description of parameter a
(* a blank line
 * description: longer description of the function)?
(* section header: section description)*
 * return: void
*/

void print_most_numbers(void)
{
	char num;

	for (num = '0'; num <= '9'; num++)
	{
		if (num != '2' && num != '4')
			_putchar(num);
	}
	_putchar('\n');
}
