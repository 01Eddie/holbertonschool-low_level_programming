#include "holberton.h"

/**
 * print_alphabet - Short description, single line
 * @void: Description of parameter x
(* a blank line
 * Description: Longer description of the function)?
(* section header: Section description)*
 * Return: void
 */
void print_alphabet(void)
{
	char letter = 'a';
	int x = 26;
	do {
		_putchar(letter);
		letter++;
		x--;
	} while (x != 0);
	_putchar('\n');
}
