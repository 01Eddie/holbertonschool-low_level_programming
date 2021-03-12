#ifndef _VARIADIC_FUNCTIONS_
#define _VARIADIC_FUNCTIONS_

#include <stdarg.h>
/*
 * Structs, enums and unions definitions
 * Typedefs
 * Function prototypes
 */

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);


#endif
