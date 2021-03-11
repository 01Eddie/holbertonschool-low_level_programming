#include <stdio.h>
#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - name function
 * @array: the integer to check
 * @size: integer
 * @cmp: function pointer
 * Return: count or -1.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int count = 0;

	/*where size is the number of elements in the array array*/
	while (count < size)
	{
	/*cmp is a pointer to the function to be used to compare values*/
		if ((*cmp)(array[count]) == 0)
			count++;
	/*int_index returns the index of the first element for which the cmp*/
	/*function does not return 0*/
		else if ((*cmp)(array[count]) > 0)
			return (count);
	}

	/*If no element matches, return -1*/
	return (-1);


	/*If size <= 0, return -1*/
	if (size <= 0)
		return (-1);


}
