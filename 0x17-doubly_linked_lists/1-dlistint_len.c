#include "lists.h"

/**
 * dlistint_len - check the code for Holberton School students.
 * @h: Constant of dlistint_t of header
 * Return: num
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		h = h->next;
		num++;
	}

	return (num);
}
