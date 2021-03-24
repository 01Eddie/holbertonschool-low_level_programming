#include "lists.h"

/**
 * delete_nodeint_at_index - check the code for Holberton School students.
 * @head: listint_t
 * @index: unsigned integer
 * Return: 1 or -1.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count;
	/*store head node*/
	listint_t *temp;
	listint_t *next;

/*If key(index) wasn't present in linked list*/
	if (head == NULL || *head == NULL)
		return (-1);
	/*If head node itself holds the key to be deleted*/
    /* && temp != NULL && temp->n == index */
	if (index == 0)
	{
		next = (*head)->next;/*Changed head*/
		free(*head);/*free old head*/
		*head = next;
		return (1);
	}
	temp = *head;
	/*Search for the key(index) to be deleted, keep track of the previous node*/
	/*as we need to change 'prev->next'*/
	for (count = 0; count < index - 1; count++)
	{
		if (temp->next == NULL)
			return (-1);
		temp = temp->next;
	}
	next = temp->next;
	/*Unlink the node from linked list*/
	temp->next = next->next;
	free(next);/*free memory*/

	return (1);
}
