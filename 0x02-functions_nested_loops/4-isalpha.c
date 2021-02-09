#include "holberton.h"

/**
 * _isalpha - Short description, single line
 * @c: Description of parameter c
(* a blank line
 * Description: Longer description of the function)?
(* section header: Section description)*
 * Return: 1 or 0
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z' && c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
