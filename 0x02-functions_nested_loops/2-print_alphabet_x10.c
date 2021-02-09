#include "holberton.h"

/**
 * print_alphabet_x10 - Short description, single line
 * @void: Description of parameter x
(* a blank line
 * Description: Longer description of the function)?
(* section header: Section description)*
 * Return: void
 */
void print_alphabet_x10(void)
{
	char letter = 'a';
	int x;

	for (x = 0; x < 10; x++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
	}
}
