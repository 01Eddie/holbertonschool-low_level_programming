#include "lists.h"

/**
 * get_dnodeint_at_index - check the code for Holberton School students.
 * @head: dlistint_t
 * @index: unsigned integer
 * Return: NULL or get_node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *last = head;

	if (head == NULL)
		return (NULL);

	while (last != NULL)
	{
		if (i == index)
			return (last);
		i++;
		last = last->next;
	}
	printf("%d", head->n);

	return (last);
}
