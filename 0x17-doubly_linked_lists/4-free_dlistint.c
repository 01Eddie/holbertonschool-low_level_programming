#include "lists.h"

/**
 * free_dlistint - check the code for Holberton School students.
 * @head: dlistint
 * Return: void.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *last;

	while (head != NULL)
	{
		last = head;
		head = head->next;
		free(last);
	}
}
