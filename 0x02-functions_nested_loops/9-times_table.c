#include "holberton.h"

/**
 * times_table - Short description, single line
 * @void: Description of parameter x
(* a blank line
 * Description: Longer description of the function)?
(* section header: Section description)*
 * Return: void
 */
void times_table(void)
{
	int count, number, res, u, d;

	for (count = 0; count < 10; count++)
	{
		for (number = 0; number < 10; number++)
		{
			res = number * count;
			
			d = res / 10;
			u = res % 10;
			if(d == 0){
				_putchar('0' + u);
				_putchar(',');
				_putchar(' ');
			}
			else
			{	
			_putchar('0' + d);
			_putchar('0' + u);
			_putchar(',');
			_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
