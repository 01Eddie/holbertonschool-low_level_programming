#include "holberton.h"

/**
 * swap_int - short description, single line
 * @a: description of parameter a
 * @b: description of parameter b
(* a blank line
 * description: longer description of the function)?
(* section header: section description)*
 * Return: void
*/
void swap_int(int *a, int *b)
{
	int change = *a;
	*a = *b;
	*b = change;
}
