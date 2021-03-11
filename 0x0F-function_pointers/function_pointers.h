#ifndef _function_pointer_
#define _function_pointer_
#include <stdio.h>
#include <stdlib.h>

int _putchar(char c);

void print_name(char *name, void (*f)(char *));

void array_iterator(int *array, size_t size, void (*action)(int));

int int_index(int *array, int size, int (*cmp)(int));

#endif /* _function_pointer_ */
