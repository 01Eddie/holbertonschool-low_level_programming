#include "search_algos.h"
int _sqrt(int val, int aux);
int _sqrt_recursion(int n);

/**
 * min_val - functions minimum value.
 * @num1: size_t
 * @num2: size_t
 * Return: (_sqrt(n, aux))
 */

size_t min_val(size_t num1, size_t num2)
{
	return ((num1 < num2) ? (num1) : (num2));
}

/**
 * _sqrt_recursion - functions recursive.
 * @n: Integer
 * Return: (_sqrt(n, aux))
 */

int _sqrt_recursion(int n)
{
	int aux = 1;

	return (_sqrt(n, aux));
}

/**
 * _sqrt - functions recursive.
 * @val: Integer
 * @aux: Integer
 * Return: aux, -1, _sqrt(val, aux+1)
 */

int _sqrt(int val, int aux)
{
	if (aux * aux == val)
		return (aux);
	else
		return ((aux * aux > val) ? (-1) : (_sqrt(val, aux + 1)));
}
/**
 * jump_search - function
 * @array: Pointer of Integer
 * @size: Size_t
 * @value: Integer
 * Return: -1 or middle
 */
int jump_search(int *array, size_t size, int value)
{
	size_t left, right;
	size_t jump;
	int value1;

	jump = sqrt(size);
	left = 0;
	right = jump;
	value1 = array[left];

	if (array && size != 0)
	{
		printf("Value checked array[%lu] = [%d]\n", left, value1);
		while (right < size && value1 < value)
		{
			if (array[right] >= value)
				break;
			left += jump;
			right += jump;
			value1 = array[left];
			printf("Value checked array[%lu] = [%d]\n", left, value1);
		}
		if (left >= size || value1 > value)
			return (-1);
		printf("Value found between indexes [%ld] and [%ld]\n", left, right);

		while (left <= min_val(size - 1, right) && value1 <= value)
		{
			value1 = array[left];
			printf("Value checked array[%lu] = [%d]\n", left, value1);
			if (value1 == value)
				return (left);
			left++;
		}
	}
	return (-1);
}
