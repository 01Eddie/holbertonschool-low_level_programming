#include "holberton.h"

/**
 * _pow_recursion - function recursive
 * @x: Integer
 * @y: Integer
 * Return: result
 */

int _pow_recursion(int x, int y)
{
	int result;

	if (y > 0)
		result = x * _pow_recursion(x, y - 1);
	else
		 result = (y == 0) ? 1 : -1;

	return (result);
}
