#include "lists.h"

/**
 * get_nodeint_at_index - check the code for Holberton School students.
 * @head: listint_t
 * @index: unsigned int
 * Return: NULL or head.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	/* listint_t current = head; */
	/*the index of the node we're currently looking at*/
	unsigned int count = 0;
/*if we get to this line, the caller was asking for a non-existent element*/
/*so we assert fail */
/*if the node does not exist, return NULL */
	if (head == NULL)
		return (NULL);

	while (count < index && head != NULL)
	{
		head = head->next;
/*where index is the index of the node, starting at 0 */
		/* if (count == 0)
			return (0); */
		/* if (count == index)
			return (head->n); */
		count++;
	}
	return (head);
}
