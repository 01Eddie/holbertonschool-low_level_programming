#include "holberton.h"

/**
 * _abs - Short description, single line
 * @num: Description of parameter j
(* a blank line
 * Description: Longer description of the function)?
(* section header: Section description)*
 * Return: val or num
 */
int _abs(int num)
{
	int val;

	if (num < 0)
	{
		val = num * -1;
		return (val);
	}
	else
		return (num);
}
