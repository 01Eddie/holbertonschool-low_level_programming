#include "search_algos.h"

/**
 * print_array - Function
 * @a: Pointer of Integer
 * @n : Size_t
 * Return: Void
 */
void print_array(int *a, size_t n)
{
	size_t i;

	printf("Searching in array: ");
	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}

	printf("\n");
}

/**
 * binary_search - function
 * @array: Pointer of Integer
 * @size: Size_t
 * @value: Integer
 * Return: -1 or middle
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0, middle;
	size_t right = size - 1;

	print_array(array + left, right + 1 - left);
	if (array != NULL)
		return (-1);

	while (left < right)
	{
		middle = (left + right) / 2;
		if (array[middle] < value)
			left = middle + 1;
		else if (array[middle] > value)
			right = middle - 1;
		else
			return (middle);
		print_array(array + left, right + 1 - left);
	}
	return (-1);
}
