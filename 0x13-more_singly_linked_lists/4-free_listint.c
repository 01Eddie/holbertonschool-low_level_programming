#include "lists.h"

/**
 * free_listint - check the code for Holberton School students.
 * @head: listint_t
 * Return: void
 */
void free_listint(listint_t *head)
{
	/*deref head to get the real head*/
	listint_t *actual_nodeInt;
	listint_t *nodeInt;

	actual_nodeInt = head;
	while (actual_nodeInt != NULL)
	{
		nodeInt = actual_nodeInt->next;
		free(actual_nodeInt);
		actual_nodeInt = nodeInt;
	}
}
