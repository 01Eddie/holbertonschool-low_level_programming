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
	dlistint_t *get_node = head;

	if (head == NULL)
		return (NULL);

	while (get_node != NULL)
	{
		if (i == index)
			return (get_node);
		i++;
		get_node = get_node->next;
	}
	printf("%d", head->n);

	return (get_node);
}
