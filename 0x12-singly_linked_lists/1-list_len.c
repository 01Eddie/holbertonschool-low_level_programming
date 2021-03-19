#include "lists.h"

/**
 * list_len - check the code for Holberton School students.
 * @h: list_t
 * Return: i
 */

size_t list_len(const list_t *h)
{
	int i;

	for (i = 0; h != NULL; i++)
		h = h->next;

	return (i);
}
