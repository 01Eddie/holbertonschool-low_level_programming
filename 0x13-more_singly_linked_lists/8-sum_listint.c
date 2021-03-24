#include "lists.h"

/**
 * sum_listint - check the code for Holberton School students.
 * @head: pointer of listint_t
 * Return: Always 0.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	/*find the sum of nodes*/
	sumOfNodes(head, &sum);

	/*required sum*/
	return (sum);
}
/**
 * sumOfNodes - function recursively.
 * @head: pointer of listint_t
 * @sum: pointer of a integer
 * Return: void
 */
void sumOfNodes(listint_t *head, int *sum)
{
	if (head == NULL)
		return;

	/*function recursively traverse the remaining nodes*/
	sumOfNodes(head->next, sum);

	/*sum accumulate*/
	*sum = *sum + head->n;
}
