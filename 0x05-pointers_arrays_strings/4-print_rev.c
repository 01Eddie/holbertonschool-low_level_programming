#include "holberton.h"

/**
 * print_rev - short description, single line
 * @s: description of parameter s
(* a blank line
 * description: longer description of the function)?
(* section header: section description)*
 * Return: void
*/

void print_rev(char *s)
{
	int count = 0;
	int word;

	while (s[count] != '\0')
		count++;

	word = count - 1;

	while (word >= 0)
	{
		_putchar(s[word]);
		word--;
	}

	_putchar('\n');
}
