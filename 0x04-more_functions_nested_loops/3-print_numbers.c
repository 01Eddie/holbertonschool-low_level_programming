#include "holberton.h"

/**
 * print_numbers- short description, single line
 * @void: description of parameter a
(* a blank line
 * description: longer description of the function)?
(* section header: section description)*
 * return: void
*/
void print_numbers(void)
{

	for (char number = '0'; number <= '9'; number++)
	{
		_putchar(number);
	}
	_putchar('\n');
}
