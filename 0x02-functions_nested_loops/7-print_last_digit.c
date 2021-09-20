#include "holberton.h"

/**
 * print_last_digit - Short description, single line
 * @num: Description of parameter j
(* a blank line
 * Description: Longer description of the function)?
(* section header: Section description)*
 * Return: val
 */

int print_last_digit(int num)
{
	int val;

	val = num % 10;

	if (num < 0)
	{
		_putchar(-val + '0');
		return (-val);
	}
	else
	{
		_putchar(val + '0');
		return (val);
	}
}
