#include "search_algos.h"

/**
 * linear_search - Function integer
 * @array: pointer of integer
 * @size: size_t
 * @value: Integer
 * Return: -1 or i
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array || size == 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}

