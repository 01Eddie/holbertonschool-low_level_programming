#include "lists.h"

/**
 * free_listint2 - check the code for Holberton School students.
 * @head: listint_t
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *actual_nodeInt;
	listint_t *nodeInt;
/* The function sets the head to NULL */
	if (head == NULL)
		return;

	actual_nodeInt = *head;

	while (actual_nodeInt != NULL)
	{
		nodeInt = actual_nodeInt->next;
		free(actual_nodeInt);
		actual_nodeInt = nodeInt;
	}
	*head = NULL;
}
