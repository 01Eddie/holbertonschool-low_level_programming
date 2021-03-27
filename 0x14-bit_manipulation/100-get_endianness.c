#include "holberton.h"

/**
 * get_endianness - function
 *
 * Return: (int) *c
 */
int get_endianness(void)
{
	unsigned int x = 1;
	char *c = (char *) &x;

	return ((int) *c);
}
