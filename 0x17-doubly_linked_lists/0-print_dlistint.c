#include "lists.h"

/**
 * print_dlistint - check the code for Holberton School students.
 * @h: Constant of dlistint_t of header
 * Return: num
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		num++;
	}

	return (num);
}
