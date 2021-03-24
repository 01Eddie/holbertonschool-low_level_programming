#include "lists.h"

/**
 * pop_listint - check the code for Holberton School students.
 * @head: listint_t
 * Return: 0 or result.
 */

int pop_listint(listint_t **head)
{
	listint_t *node;
	/*underflow condition*/
	if (head == NULL || *head == NULL)
		return (0);

	node = *head;
/*unlink the head node for the caller*/
	*head = node->next;
/*Pull out data before the node is deleted*/
	int result = node->n;
/* Note the `*` — uses a reference-pointer*/
/*just like `push()` and `deleteList()`.*/

/*free the head node*/
	free(node);
/*don't forget to return the data*/
	return (result);
}
