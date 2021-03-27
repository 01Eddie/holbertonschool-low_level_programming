#include "holberton.h"

/**
 * clear_bit - check the code for Holberton School students.
 * @n: unsigned long integer
 * @index: unsigned integer
 * Return: 1 or -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64 || !n)
		return (-1);

	*n = *n & ~(1 << index);
	return (1);
}
