#include "holberton.h"

/**
 * _islower - Short description, single line
 * @c: Description of parameter c
(* a blank line
 * Description: Longer description of the function)?
(* section header: Section description)*
 * Return: 1 or 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

