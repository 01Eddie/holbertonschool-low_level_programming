#include "lists.h"

/**
 * insert_dnodeint_at_index - check the code for Holberton School students.
 * @h: pointer of dlistint_t
 * @idx: unsigned integer
 * @n: integer
 * Return: new_node or NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *new_node, *node;

	node = *h;

	if (h == NULL)
		return (NULL);
	if (idx != 0)
	{
		i = 0;
		while (i < idx - 1 && node != NULL)
		{
			node = node->next;
			i++;
		}
	}
	if (idx > i + 1)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *h, new_node->prev = NULL;
		*h = new_node;
		return (new_node);
	}
	if (idx == i)
	{
		new_node->prev = node;
		new_node->next = NULL;
		node->next = new_node;
		return (new_node);
	}
	new_node->prev = node;
	new_node->next = node->next;
	node->next = new_node;
	return (new_node);
}
