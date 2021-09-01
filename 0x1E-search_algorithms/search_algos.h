#ifndef _SEARCH_ALGOS_
#define _SEARCH_ALGOS_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int linear_search(int *array, size_t  size, int value);
int binary_search(int *array, size_t size, int value);

void print_array(int *a, size_t n);
/* void print_array(int *a, size_t low, size_t high) */
int jump_search(int *array, size_t size, int value);

size_t min_val(size_t num1, size_t num2);

#endif /* _SEARCH_ALGOS_ */
