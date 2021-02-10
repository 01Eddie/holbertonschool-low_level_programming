#include "holberton.h"

/**
 * jack_bauer - Short description, single line
 * @void: Description of parameter x
(* a blank line
 * Description: Longer description of the function)?
(* section header: Section description)*
 * Return: void
 */
void jack_bauer(void)
{
	int hour, min, hourD, hourU, minU, minD;

	for (hour = 0; hour < 24; hour++)
	{
		hourD = hour / 10;
		hourU = hour % 10;
		for (min = 0; min < 60; min++)
		{
			minD = min / 10;
			minU = min % 10;
			_putchar('0' + hourD);
			_putchar('0' + hourU);
			_putchar(':');
			_putchar('0' + minD);
			_putchar('0' + minU);
			_putchar('\n');
		}
	}
}
