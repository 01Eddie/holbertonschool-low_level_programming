#include "lists.h"

/**
 * delete_dnodeint_at_index - check the code for Holberton School students.
 * @head: pointer dlistint_t
 * @index: unsigned integer
 * Return: 1 or -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *last;

	if (*head == NULL)
		return (-1);

	last = *head;
	if (index == 0)
	{
		(*head) = last->next;
		if (last->next != NULL)
			last->next->prev = NULL;
		free(last);
		return (1);
	}

	while (index > i)
	{
		if (last->next == NULL)
			return (-1);
		last = last->next;
		i++;
	}

	if (last->next != NULL)
		last->next->prev = last->prev;

	if (last->prev != NULL)
		last->prev->next = last->next;

	free(last);
	return (1);

}
