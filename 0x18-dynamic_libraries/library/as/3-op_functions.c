#include "calc.h"

/**
 * add - Function in addition
 * @a: Integer
 * @b: Integer
 * Return: a + b
 */
int add(int a, int b)
{
	return (a + b);
}
/**
 * sub - Function in subtration
 * @a: Integer
 * @b: Integer
 * Return: a - b
 */
int sub(int a, int b)
{
	return (a - b);
}
/**
 * mul - Function in multiplication
 * @a: Integer
 * @b: Integer
 * Return: a * b
 */
int mul(int a, int b)
{
	return (a * b);
}
/**
 * div - Function in division
 * @a: Integer
 * @b: Integer
 * Return: a / b
 */
int div(int a, int b)
{
	if (b != 0)
		return (a / b);
	return (0);
}
/**
 * mod - Function in modulo
 * @a: Integer
 * @b: Integer
 * Return: a % b
 */
int mod(int a, int b)
{
	if (b != 0)
		return (a % b);
	return (0);
}

