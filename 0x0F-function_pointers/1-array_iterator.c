#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - iterator void
 * @array: the integer to print
 * @size: size_t
 * @action: function pointer
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
/*where size is the size of the array*/
 /* and action is a pointer to the function you need to use*/
	size_t i;

	for (i = 0; i < size; i++)
		(*action)(array[i]);

}
