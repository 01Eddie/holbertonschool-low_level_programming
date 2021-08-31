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
 * Return: -1
 */
int binary_search(int *array, size_t size, int value)
{
	/**
	* function binary_search(A, n, T) is
	* L := 0
	* R := n − 1
	* while L ≤ R do
	* m := floor((L + R) / 2)
		* if A[m] < T then
			* L := m + 1
		* else if A[m] > T then
			* R := m − 1
		* else:
			* return m
		* return unsuccesful
	 */
	size_t l = 0, m;
	size_t r = size - 1;

	print_array(array + l, r + 1 - l);
	if (!array)
		return (-1);

	while (l < r)
	{
		m = (l + r) / 2;
		if (array[m] < value)
			l = m + 1;
		else if (array[m] > value)
			r = m - 1;
		else
			return (m);
		print_array(array + l, r + 1 - l);
	}
	return (-1);
}
