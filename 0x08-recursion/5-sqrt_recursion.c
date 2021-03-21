#include "holberton.h"


/**
 * _sqrt_recursion - functions recursive.
 * @n: Integer
 * Return: (_sqrt(n, aux))
 */

int _sqrt_recursion(int n)
{
	int aux = 1;

	return (_sqrt(n, aux));
}

/**
 * _sqrt - functions recursive.
 * @val: Integer
 * @aux: Integer
 * Return: aux, -1, _sqrt(val, aux+1)
 */

int _sqrt(int val, int aux)
{
	if (aux * aux == val)
		return (aux);
	else
		return ((aux * aux > val) ? (-1) : (_sqrt(val, aux + 1)));
}
