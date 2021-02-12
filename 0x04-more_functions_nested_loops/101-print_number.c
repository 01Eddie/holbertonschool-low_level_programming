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
	if (n > 999)
	{
		_putchar('0' + (n / 1000) % 10);
		_putchar('0' + ((n / 100) % 10));
		_putchar('0' + ((n / 10) % 10));
		_putchar('0' + ((n % 10)));
	}
	else if (n > 99)
	{
		_putchar('0' + (n / 100) % 10);
		_putchar('0' + (n / 10) % 10);
		_putchar('0' + (n % 10));
	}
	else if (n > 9)
	{
		_putchar('0' + (n / 10));
		_putchar('0' + n % 10);
	}
	else if (n < -9)
	{
		_putchar('-');
		_putchar('0' + (n / 10) * (-1));
		_putchar('0' + (n % 10) * (-1));

	}
	else
		_putchar('0' + n);
	
}

