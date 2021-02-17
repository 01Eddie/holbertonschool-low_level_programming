#include "holberton.h"

/**
 * puts_half - short description, single line
 * @str: string
(* a blank line
 * description: longer description of the function)?
(* section header: section description)*
 * Return: void
 */
void puts_half(char *str)
{
	int count = 0, div;

	while (str[count] != '\0')
	{
		count++;
	}

	div = count / 2;

	if (div % 2 == 0)
	{
		div++;
	}

	while (div < count)
	{
		_putchar(str[div]);
		div++;
	}

	_putchar('\n');
}
