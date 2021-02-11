#include "holberton.h"

/**
 * more_numbers- short description, single line
 * @void: description of parameter a
(* a blank line
 * description: longer description of the function)?
(* section header: section description)*
 * return: void
*/

void more_numbers(void)
{
	int i;
	int u, d, num;

	for (i = 0; i < 10; i++)
	{
		for (num = 0; num < 15; num++)
		{
			if (num < 10)
			{
				u = num;
			}
			else
			{
				d = num / 10;
				u = num % 10;
				_putchar('0' + d);
			}
			_putchar('0' + u);
		}
		_putchar('\n');
	}
}
