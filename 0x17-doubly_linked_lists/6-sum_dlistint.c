#include "lists.h"

/**
 * sum_dlistint - check the code for Holberton School students.
 * @head: Pointer dlistint_t
 * Return: 0 sum
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}

	return (sum);
}