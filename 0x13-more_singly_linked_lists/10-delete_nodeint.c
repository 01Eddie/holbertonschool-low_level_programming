#include "lists.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	/*store head node*/
	listint_t *temp = *head;
	listint_t *prev;

	/*If head node itself holds the key to be deleted*/
	if (temp != NULL && temp->data == index)
	{
		*head = temp->next;/*Changed head*/
		free(temp);/*free old head*/
		return 1;
	}

	/*Search for the key(index) to be deleted, keep track of the previous node*/
	/*as we need to change 'prev->next'*/
	while (temp != NULL && temp->data)
}
