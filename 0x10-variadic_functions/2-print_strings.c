#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_string - variadic functions
 * @separator: Character
 * @n: Integer
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int count = 0;
	va_list ap;
	char *valueS;

	va_start(ap, n);

	for(; count < n; count++)
	{
		valueS = va_arg(ap, char *);
		printf("%s", valueS);

		if (valueS == NULL)
			printf("(nil)");

		if (separator != NULL && count < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
