#include "holberton.h"

/**
 * puts2 - short description, single line
 * @str: description of parameter s
(* a blank line
 * description: longer description of the function)?
(* section header: section description)*
 * Return: void
*/

void puts2(char *str)
{
	int count = 0;

	while (str[count] != '\0')
	{
		if (str[count] % 2 == 0)
			_putchar(str[count]);

		count++;
	}
	_putchar('\n');
}
