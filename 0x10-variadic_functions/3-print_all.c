#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all- variadic functions
 * @format: constant
 * Return: void.
 */

/*where format is a list of types of arguments passed to the function*/

/*c: char*/
/*i: integer*/
/*f: float*/
/*s: char * (if the string is NULL, print (nil) instead*/
/*any other char should be ignored*/
void print_all(const char * const format, ...)
{
	unsigned int count1 = 0, count2, separator = 0;
	va_list ap;
	char *valueS;
	const char arr[] = "cifs";

	va_start(ap, format);
	while (format[count1] != '\0')
	{
		count2 = 0;
		while (arr[count2] != '\0')
		{
			if (arr[count2] == format[count1] && separator)
				printf(", ");
			count2++;
		}
		switch (format[count1])
		{
			case 'c':
				printf("%c", va_arg(ap, int));
				separator = 1;
				break;
			case 'i':
				printf("%d", va_arg(ap, int));
				separator = 1;
				break;
			case 'f':
				printf("%f", va_arg(ap, double));
				break;
			case 's':
				valueS =  va_arg(ap, char *);
				separator = 1;
				if (valueS == NULL)
					printf("(nil)");
				printf("%s", valueS);
				break;
		}
		count1++;
	}
	printf("\n");
	va_end(ap);
}
