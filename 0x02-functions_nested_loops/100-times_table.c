#include "holberton.h"

/**
 * print_times_table - Short description, single line
 * @n: Description of parameter n
(* a blank line
 * Description: Longer description of the function)?
(* section header: Section description)*
 * Return: no return
 */
void print_times_table(int n)
{
	int count, number, res, u, d, c;

	for (count = 0; count < n + 1; count++)
	{
		_putchar('0');
		for (number = 1; number < n + 1; number++)
		{
			res = number * count;
			_putchar(',');
			_putchar(' ');

			if (res < 10)
			{
				_putchar(' ');
				_putchar('0' + res);
			}
			else if (res < 100)
			{
				d = res / 10;
				u = res % 10;
				_putchar('0' + d);
				_putchar('0' + u);
			}
			else
			{
				c = (res / 100) % 10;
				d = res / 10 % 10;
				u = (res % 10) % 10;
				_putchar('0' + c);
				_putchar('0' + d);
				_putchar('0' + u);
			}
		}
		_putchar('\n');
	}
}
