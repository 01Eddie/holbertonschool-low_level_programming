#include "holberton.h"

/**
 * factorial - functions recursive.
 * @n: integer
 * Return: (n * factorial(n-1)), 1, or -1.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n <= 1)
		return (1);
	else
		return (n * factorial(n - 1));
}
