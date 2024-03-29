#include "lists.h"

/**
 * add_dnodeint - check the code for Holberton School students.
 * @head: dlistint double pointer
 * @n: constant integer
 * Return: NULL or *head
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = (*head);
	new_node->prev = NULL;

	if ((*head) != NULL)
		(*head)->prev = new_node;
	(*head) = new_node;

	return (new_node);
}
