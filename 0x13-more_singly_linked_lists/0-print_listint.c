#include "lists.h"

/**
 * print_listint - function of singly linked list
 * @h: constant of listint_t
 * Return: countN
 */

size_t print_listint(const listint_t *h)
{
	/*The index of the node we're currently looking at*/
	size_t countN = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		countN++;
	}

	return (countN);
}
