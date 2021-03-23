#include "lists.h"

/**
 * listint_len - function of singly linked list
 * @h: constant of listint_t
 * Return: countN
 */
size_t listint_len(const listint_t *h)
{
/*The index of the node we're currently looking at*/
	size_t countN = 0;

	while (h != NULL)
	{
		h = h->next;
		countN++;
	}

	return (countN);
}
