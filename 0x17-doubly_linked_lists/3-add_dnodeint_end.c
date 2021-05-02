#include "lists.h"

/**
 * add_dnodeint_end - check the code for Holberton School students.
 * @head: dlistint_t
 * @n: constant integer
 * Return: NULL or new_node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
	dlistint_t *last = *head;

	if (new_node == NULL)
		return (NULL);

	if ((*head) == NULL)
	{
		new_node->prev = NULL;
		new_node->n = n;
		new_node->next = NULL;
		*head = new_node;
		return (new_node);
	}

	while (last->next != NULL)
		last = last->next;

	last->next = NULL;
	new_node->prev = last;
	new_node->n = n;
	last->next = new_node;
	return (new_node);
}
