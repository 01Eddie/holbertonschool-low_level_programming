#include "holberton.h"

int is_prime(int num, int div);

/**
 * is_prime_number - functions recursives
 * @n: Integer
 * Return: 0 or is_prime(n, 2)
 */

int is_prime_number(int n)
{
	if (n < 2)
		return (0);

	return (is_prime(n, 2));

}

/**
 * is_prime - functions recursives
 * @num: Integer
 * @div: Integer
 * Return: 1, is_prime(num, div + 1)
 */

int is_prime(int num, int div)
{
	if ((num / 2) < div)
		return (1);
	else
		return ((num % div == 0 || num < 2) ? 0 : (is_prime(num, div + 1)));
}

