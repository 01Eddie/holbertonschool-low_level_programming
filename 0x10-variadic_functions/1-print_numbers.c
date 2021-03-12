#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - variadics functions
 * @separator: Character
 * @n: Integer
 * Return: Always 0.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int count = 0;
	va_list ap;
	int value = 0;

	va_start(ap, n);

/*and n is the number of integers passed to the function*/
	for (; count < n; count++)
	{
		value = va_arg(ap, int);

/*if (count == n - 1)
		printf("%d", value);
	else*/
			printf("%d", value);

/*If separator is NULL, don’t print it*/
		if (separator != NULL && count < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
