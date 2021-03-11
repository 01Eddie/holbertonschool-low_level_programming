#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - variadic functions.
 * @n: unsigned integer
 * Return: val or 0
 */

int sum_them_all(const unsigned int n, ...)
{
	int val = 0;
	va_list ap;

	unsigned int count = 0;

	va_start(ap, n);

	for (; count < n; count++)
		val += va_arg(ap, int);

	va_end(ap);

	return (val);

	if (n == 0)
		return (0);
}
