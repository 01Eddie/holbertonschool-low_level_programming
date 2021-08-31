#include "search_algos.h"
void print_array(int *a, size_t low, size_t high);

/**
 * print_array - Function
 * @a: Pointer of Integer
 * @low: Size_t
 * @high: Size_t
 * Return: Void
 */
void print_array(int *a, size_t low, size_t high)
{
	size_t i;

	printf("Searching in array: ");
	for (i = low; i < high; i++)
	{
		printf("%d, ", a[i]);
	}

	printf("%d\n", a[i]);
}

/**
 * binary_search - function
 * @array: Pointer of Integer
 * @size: Size_t
 * @value: Integer
 * Return: -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0;
	size_t right = size - 1;
	size_t middle = (size - 1) / 2;

	if (!array || size == 0)
		return (-1);

	while (left < right)
	{
		print_array(array, left, right);
		middle = (left + right) / 2;
		if (value < array[middle])
			right = middle - 1;
		else if (value > array[middle])
			left = middle + 1;
		else
			return (middle);
		/* print_array(array + left, right + 1 - left); */
	}
	return (-1);
}
