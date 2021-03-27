#include "holberton.h"

/**
 * flip_bits - check the code for Holberton School students.
 * @n: unsigned long integer
 * @m: unsigned long integer
 * Return: count
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i, count = 0;

	for (i = 0; i < 64; i++)
	{
		if (get_bit(n, i) != get_bit(m, i))
			count++;
	}
	return (count);
}

/**
 * get_bit - check the code for Holberton School students.
 * @n: integer
 * @index: unsigned integer
 * Return: n & 0x1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int c;

	if (index > 64)
		return (-1);

	for (c = 0; c < index; c++)
		n >>= 0x1;

	return (n & 0x1);
}
